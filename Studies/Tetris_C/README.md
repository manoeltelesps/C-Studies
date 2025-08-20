# Jogo de Tetris em C

Este projeto é uma implementação básica do clássico jogo **Tetris** em linguagem C, utilizando a biblioteca padrão e algumas específicas do Windows. O código foi estruturado para funcionar como um jogo simples em terminal.

---

## Funcionalidades
1. **Movimentação da peça**
   - `A`: Move para a esquerda.
   - `D`: Move para a direita.
   - `S`: Acelera a queda da peça.
   - `W`: Gira a peça 90 graus no sentido horário.
   - `F`: Encerra o jogo.

2. **Sistema de pontuação**
   - O jogador ganha 10 pontos por cada linha cheia que for eliminada.

3. **Peças**
   - O jogo inclui várias peças do Tetris, incluindo variações como "L encurtado" e "linha encurtada".

4. **Rotação**
   - A rotação das peças é realizada com base na transformação da matriz que representa cada peça.

5. **Game Over**
   - O jogo termina quando não há espaço para a nova peça no tabuleiro.

---

## Estrutura do Projeto
### Arquivos
- O jogo é implementado em um único arquivo `.c`, sem dependências externas além das bibliotecas padrão.

### Funções Principais
- `initBoard`: Inicializa o tabuleiro vazio.
- `drawBoard`: Desenha o estado atual do tabuleiro.
- `drawPiece`: Mostra a peça atual na tela.
- `checkCollision`: Verifica se há colisões ao mover ou rotacionar a peça.
- `placePiece`: Fixa a peça no tabuleiro ao atingir o chão ou outra peça.
- `removeFullLines`: Remove as linhas completas e ajusta a pontuação.
- `rotatePiece`: Gira a peça no sentido horário.

---

## Dependências
- **Windows**: O código utiliza funções específicas como `system("cls")` e `Sleep`. Para executar em outro sistema operacional, será necessário ajustar essas partes.
- **Bibliotecas**
  - `stdlib.h`: Para gerar números aleatórios.
  - `time.h`: Para inicializar o gerador de números aleatórios.
  - `windows.h`: Para controle de exibição e pausas no Windows.
  - `conio.h`: Para detecção de teclas pressionadas.

---

## Como Rodar
1. Compile o código com um compilador compatível, como `gcc`.
   ```bash
   gcc tetris.c -o tetris
   ```
2. Execute o programa:
   ```bash
   ./tetris
   ```
3. Pressione qualquer tecla para iniciar o jogo.

---

## Melhorias Possíveis
- **Portabilidade**: Substituir funções específicas do Windows por alternativas multiplataforma.
- **Interface Gráfica**: Adicionar uma interface mais visual.
- **Aprimorar a rotação**: Corrigir bugs ou limitações na rotação das peças.
- **Níveis de dificuldade**: Introduzir níveis que acelerem a queda das peças conforme o progresso do jogador.

---

Desenvolvido como um projeto didático para praticar lógica de programação e conceitos de jogos em C. Divirta-se jogando! 🎮
