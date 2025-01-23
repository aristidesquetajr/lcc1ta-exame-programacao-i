#include <stdio.h>

char B[5][5] = {
    {'*', '*', '*', '*', ' '},
    {'*', ' ', ' ', ' ', '*'},
    {'*', '*', '*', '*', ' '},
    {'*', ' ', ' ', ' ', '*'},
    {'*', '*', '*', '*', ' '}};
char A[5][5] = {
    {'*', '*', '*', '*', '*'},
    {'*', ' ', ' ', ' ', '*'},
    {'*', '*', '*', '*', '*'},
    {'*', ' ', ' ', ' ', '*'},
    {'*', ' ', ' ', ' ', '*'}};

char I[5][5] = {
    {'*', '*', '*', '*', '*'},
    {' ', ' ', '*', ' ', ' '},
    {' ', ' ', '*', ' ', ' '},
    {' ', ' ', '*', ' ', ' '},
    {'*', '*', '*', '*', '*'}};

void printMatriz() {
  for (int l = 0; l < 5; l++) {
    for (int c = 0; c < 5; c++)
      printf("%c", B[l][c]);
    printf(" ");

    for (int c = 0; c < 5; c++)
      printf("%c", A[l][c]);
    printf(" ");

    for (int c = 0; c < 5; c++)
      printf("%c", I[l][c]);

    printf("\n");
  }
}

void main() {
  int qtdPrint;

  printf("Quantas vezes deseja imprimir a matriz? ");
  scanf("%d", &qtdPrint);

  for (int i = 1; i <= qtdPrint; i++) {
    printf("\n");
    printMatriz();
  }
}