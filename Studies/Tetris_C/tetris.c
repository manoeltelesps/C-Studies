#include <stdio.h>
#include <stdlib.h> //gera numeros aleatorios
#include <time.h> //inica o gerador de numeros aleatorios
#include <windows.h> 
#include <conio.h>

#define BOARD_WIDTH 10
#define BOARD_HEIGHT 20
#define SHAPE_SIZE 4

typedef struct {
    int x, y;
    int shape[SHAPE_SIZE][SHAPE_SIZE]; //tamanho peça
} Piece;

int score = 0;

// Peças do Tetris
int shapes[12 ][4][4] = {
    {{1, 1, 1, 1},
     {0, 0, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},  // Linha

    {{1, 1, 0, 0},
     {1, 1, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},  // Quadrado

    {{1, 0, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},  // Quadrado pequeno

    {{1, 1, 1, 0},
     {0, 1, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},  // T

    {{0, 1, 0, 0},
     {1, 1, 1, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},  // T ao contrario

    {{1, 1, 0, 0},
     {0, 1, 1, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},  // Z

    {{0, 1, 1, 0},
     {1, 1, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},  // S

    {{1, 1, 1, 0},
     {1, 0, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},  // L

    {{1, 1, 1, 0},
     {0, 0, 1, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},  // J

    {{1, 1, 0, 0},
     {1, 0, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}}, //L encurtado

    {{0, 1, 0, 0},
     {1, 1, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}}, //L encurtado ao contrario

    {{1, 1, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}}, // linha encurtado
};

void initBoard(int board[BOARD_HEIGHT][BOARD_WIDTH]);
void drawBoard(int board[BOARD_HEIGHT][BOARD_WIDTH]);
void drawPiece(Piece *piece);
int checkCollision(Piece *piece, int board[BOARD_HEIGHT][BOARD_WIDTH], int dx, int dy);
void placePiece(Piece *piece, int board[BOARD_HEIGHT][BOARD_WIDTH]);
void removeFullLines(int board[BOARD_HEIGHT][BOARD_WIDTH]);
void rotatePiece(Piece *piece);

int main() {
    int board[BOARD_HEIGHT][BOARD_WIDTH];
    Piece currentPiece;

    char input;
    srand(time(0));

    printf("Pressione qualquer tecla para iniciar o jogo...\n");
    getch();

    // Inicializa o tabuleiro e a primeira peça
    initBoard(board);
    currentPiece = (Piece){.x = 3, .y = 0};
    memcpy(currentPiece.shape, shapes[rand() % 7], sizeof(currentPiece.shape));

    while (1) {
        system("cls"); // Limpa a tela no Windows
        drawBoard(board);
        drawPiece(&currentPiece);

        if (kbhit()) { // Detecta se uma tecla foi pressionada
            input = getch();
            switch (input) {
                case 'a':
                    if (!checkCollision(&currentPiece, board, -1, 0)) currentPiece.x--;
                    break;
                case 'd':
                    if (!checkCollision(&currentPiece, board, 1, 0)) currentPiece.x++;
                    break;
                case 's':
                    if (!checkCollision(&currentPiece, board, 0, 1)) currentPiece.y++;
                    break;
                case 'w': 
                       { Piece rotatedPiece = currentPiece; rotatePiece(&rotatedPiece);
                if (!checkCollision(&rotatedPiece, board, 0, 0)) {currentPiece = rotatedPiece; }  }              
                    break;
                case 'f':
                    printf("Jogo encerrado!\n");
                    exit(0);
            }
        }

            //vê se teve colisão
        if (checkCollision(&currentPiece, board, 0, 1)) {
            placePiece(&currentPiece, board);
            removeFullLines(board);
            currentPiece = (Piece){.x = 3, .y = 0};
            memcpy(currentPiece.shape, shapes[rand() % 7], sizeof(currentPiece.shape));
            if (checkCollision(&currentPiece, board, 0, 0)) break;
        } else {
            currentPiece.y++;
        }

        Sleep(200); //  velocidade
    }

    printf("Game Over!\n");
    return 0;
}

// Funções auxiliares

//inicia o tabuleiro preenchendo com zero
void initBoard(int board[BOARD_HEIGHT][BOARD_WIDTH]) {
    for (int y = 0; y < BOARD_HEIGHT; y++)
        for (int x = 0; x < BOARD_WIDTH; x++)
            board[y][x] = 0;
}

void rotatePiece(Piece *piece) {
    int rotatedShape[SHAPE_SIZE][SHAPE_SIZE];

    // Gira a matriz da peça 90 graus no sentido horário
    //sim Lucas ele so está girando pra direita, tive q sair de tarde e nn terminei ent vc esta livre parar mudar o q quiser
    for (int y = 0; y < SHAPE_SIZE; y++) {
        for (int x = 0; x < SHAPE_SIZE; x++) {
            rotatedShape[x][SHAPE_SIZE - 1 - y] = piece->shape[y][x];
        }
    }

    // Copia a matriz girada de volta para a peça
    memcpy(piece->shape, rotatedShape, sizeof(rotatedShape));
}

// Modifiquei para mostrar a pontuação
void drawBoard(int board[BOARD_HEIGHT][BOARD_WIDTH]) {
    system("cls"); // Limpa a tela no Windows

    // Mostra o score na parte superior
    printf("Score: %d\n", score);
    printf("====================\n");

    // Desenha o tabuleiro
    for (int y = 0; y < BOARD_HEIGHT; y++) {
        for (int x = 0; x < BOARD_WIDTH; x++) {
            if (board[y][x]) printf("#");
            else printf(".");
        }
        printf("\n");
    }
}

//nova peça
void drawPiece(Piece *piece) {
    for (int y = 0; y < SHAPE_SIZE; y++) {
        for (int x = 0; x < SHAPE_SIZE; x++) {
            if (piece->shape[y][x]) {
                int posY = piece->y + y;
                int posX = piece->x + x;
                printf("\033[%d;%dH#", posY + 1, posX + 1);  // Move o cursor e imprime
            }
        }
    }
}
//vê se a peça colide com o tabuleiro ou com as laterais
int checkCollision(Piece *piece, int board[BOARD_HEIGHT][BOARD_WIDTH], int dx, int dy) {
    for (int y = 0; y < SHAPE_SIZE; y++) {
        for (int x = 0; x < SHAPE_SIZE; x++) {
            if (piece->shape[y][x]) {
                int newX = piece->x + x + dx;
                int newY = piece->y + y + dy;
                if (newX < 0 || newX >= BOARD_WIDTH || newY >= BOARD_HEIGHT || board[newY][newX])
                    return 1;
            }
        }
    }
    return 0;
}
//fixa as peças no tabuleiro quando ela atingir o fundo
void placePiece(Piece *piece, int board[BOARD_HEIGHT][BOARD_WIDTH]) {
    for (int y = 0; y < SHAPE_SIZE; y++) {
        for (int x = 0; x < SHAPE_SIZE; x++) {
            if (piece->shape[y][x]) {
                board[piece->y + y][piece->x + x] = 1;
            }
        }
    }
}
// limpar as linhas que estão cheias
void removeFullLines(int board[BOARD_HEIGHT][BOARD_WIDTH]) {
    int linesRemoved = 0; // Contador de linhas removidas
    for (int y = 0; y < BOARD_HEIGHT; y++) {
        int full = 1;
        for (int x = 0; x < BOARD_WIDTH; x++) {
            if (!board[y][x]) {
                full = 0;
                break;
            }
        }
        if (full) {
            linesRemoved++;
            for (int row = y; row > 0; row--) {
                for (int x = 0; x < BOARD_WIDTH; x++) {
                    board[row][x] = board[row - 1][x];
                }
            }
            for (int x = 0; x < BOARD_WIDTH; x++) board[0][x] = 0;
        }
    }
    // Atualiza o score: 10 pontos por linha removida
    score += linesRemoved * 10;
}