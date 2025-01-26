#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inputMatriz(int matriz[5][5])
{
  srand(time(NULL));
  for (int l = 0; l < 5; l++)
  {
    for (int c = 0; c < 5; c++)
    {
      int num = rand() % 10; // Gera numeros aleatorios de 0 a 10
      matriz[l][c] = num;
      printf("Informe um caracter [%d][%d]: %d\n", l, c, num);
      // scanf("%d", &matriz[l][c]);
    }
  }
}

void printOriginalMatriz(int matriz[5][5])
{
  for (int l = 0; l < 5; l++)
  {
    for (int c = 0; c < 5; c++)
    {
      printf("%d\t", matriz[l][c]);
    }
    printf("\n");
  }

  printf("\n");
}

void printMatrizTriangulo(char matriz[5][5])
{
  for (int l = 0; l < 5; l++)
  {
    for (int c = 0; c < 5; c++)
    {
      printf("%c\t", matriz[l][c]);
    }
    printf("\n");
  }

  printf("\n");
}

void transformeTriangulo(char triangulo[5][5], int matriz[5][5])
{
  for (int l = 0; l < 5; l++)
  {
    for (int c = 0; c < 5; c++)
    {
      triangulo[l][c] = '0' + matriz[l][c];
      if (((l > 0) && (l < 4)) && ((c > 0) && (c < 4)))
      {
        triangulo[l][c] = '*';
      }
    }
  }
}

void printMatrizBAI(char B[5][5], char A[5][5], char I[5][5])
{
  printf("\n");
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
  printf("\n\n");
}

int calcValTotalMargins(int matriz[5][5])
{
  int total = 0;

  for (int i = 0; i < 5; i++)
  {
    total += matriz[i][0]; // Lateral esquerda
    total += matriz[i][4]; // Lateral direita

    if (i > 0 && i < 4)
    {
      total += matriz[0][i]; // Superior
      total += matriz[4][i]; // Inferior
    }
  }

  return total;
}

int calcDoubleValueTriangulo(int matriz[5][5])
{
  int total = 0;

  for (int l = 0; l < 5; l++)
  {
    for (int c = 0; c < 5; c++)
    {
      if (((l > 0) && (l < 4)) && ((c > 0) && (c < 4)))
      {
        total += (matriz[l][c] * 2);
      }
    }
  }

  return total;
}