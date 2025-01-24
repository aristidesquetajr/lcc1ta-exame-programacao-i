#include <stdio.h>
#include <stdlib.h>
#include "letter.h"

void printMatriz()
{
  system("clear");

  for (int l = 0; l < 5; l++)
  {
    for (int c = 0; c < 5; c++)
      printf("%c", B[l][c]);
    // printf("\033[34m%c\033[0m", B[l][c]);
    printf("\t");

    for (int c = 0; c < 5; c++)
      printf("%c", A[l][c]);
    printf("\t");

    for (int c = 0; c < 5; c++)
      printf("%c", I[l][c]);

    printf("\n");
  }
}

void inputCaracter(char matriz[5][5])
{
  for (int l = 0; l < 5; l++)
  {
    for (int c = 0; c < 5; c++)
    {
      if (matriz[l][c] == '*')
        continue;
      else
      {
        printMatriz();
        printf("Informe um caracter: ");
        scanf(" %c", &matriz[l][c]);
      }
    }
  }
}

void main()
{
  inputCaracter(B);
  inputCaracter(A);
  inputCaracter(I);

  printMatriz();
}