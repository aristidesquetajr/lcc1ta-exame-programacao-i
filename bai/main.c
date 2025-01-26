#include <stdio.h>
#include <stdlib.h>
#include "letter.h" // Importa os vetores que forma a palavra BAI

void printMatriz() // Função que imprime a matriz
{
  system("clear");

  for (int l = 0; l < 5; l++)
  {
    for (int c = 0; c < 5; c++)
      printf("%c", B[l][c]);
    printf("\t");

    for (int c = 0; c < 5; c++)
      printf("%c", A[l][c]);
    printf("\t");

    for (int c = 0; c < 5; c++)
      printf("%c", I[l][c]);

    printf("\n");
  }
}

void inputCaracter(char matriz[5][5]) // Função que preenche cada matriz
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