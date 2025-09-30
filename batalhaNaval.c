#include <stdio.h>

int main() {
char tabuleiro[11][11];

// Preenche a primeira linha com letras (de A a I)
for (int j = 1; j < 11; j++) {
tabuleiro[0][j] = 'A' + (j - 1); // 'A' + 0 = 'A', 'A' + 1 = 'B', etc.
}

// Preenche a primeira coluna com números (de 1 a 10)
for (int i = 1; i < 11; i++) {
// Converte o número para char, usando o caractere '0' como base
tabuleiro[i][0] = '0' + i;
}
for (int i = 1; i < 11; i++) {
for (int j = 1; j < 11; j++) {
tabuleiro[i][j] = '0'; 
{printf("%", tabuleiro[3][3]= '3');} //posição vertical
{printf("%", tabuleiro[4][3]= '3');}
{printf("%", tabuleiro[5][3]= '3');}
{printf("%", tabuleiro[3][5]= '3');} //posição horizontal
{printf("%", tabuleiro[3][6]= '3');}
{printf("%", tabuleiro[3][7]= '3');}

}
}
for (int i = 0; i < 11; i++) {
for (int j = 0; j < 11; j++) {
if (i == 0 && j == 0) {
printf("TABULEIRO BATALHA NAVAL \n");
printf(" "); // Espaço para a célula superior esquerda
} else {
printf(" %c ", tabuleiro[i][j]); // Imprime o caractere e um espaço
}
}
printf("\n"); // Quebra de linha ao final de cada linha
}

return 0;
}
