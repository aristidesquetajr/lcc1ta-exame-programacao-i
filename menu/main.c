#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "letter.h"
#include "functions.h"

#define VER_PALAVRA_BAI 1
#define CALC_VAL_TOTAL_MARGIM 2
#define MULT_2_TRIANGULO 3
#define SAIR 4

void main()
{
  int option;
  int matriz[5][5];
  char triangulo[5][5];

  inputMatriz(matriz);
  sleep(1);
  system("clear");
  printOriginalMatriz(matriz);

  transformeTriangulo(triangulo, matriz);
  printMatrizTriangulo(triangulo);

  do
  {
    puts("1 - Ver a palavra BAI;\n2 - Calcular o valor total das margens;\n3 - Multiplicação por 2 triângulo retângulo;\n4 - Sair");

    printf("Escolha uma opção: ");
    scanf("%d", &option);

    switch (option)
    {
    case VER_PALAVRA_BAI:
      printMatrizBAI(B, A, I);
      break;

    case CALC_VAL_TOTAL_MARGIM:
      printf("\nO total das margens é %d\n\n", calcValTotalMargins(matriz));
      break;

    case MULT_2_TRIANGULO:
      printf("\nA multiplicação por 2 triângulo retângulo é %d\n\n", calcDoubleValueTriangulo(matriz));
      break;

    case SAIR:
      break;

    default:
      printf("Opção invalida!\n");
      break;
    }
  } while (option != SAIR);
}