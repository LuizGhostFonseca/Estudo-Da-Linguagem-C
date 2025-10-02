#include <stdio.h>
#include <locale.h>

// 2) Dadas duas matrizes 3×3 de floats, calcule e imprima a média dos valores da matriz.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma = 0, media = 0;
    float matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},matriz2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            soma += matriz1[i][j] + matriz2[i][j];
        }
        
    }
    media = soma / 18;
   printf("a soma é %d", soma);
   printf("a media é %d", media);
    return 0;
}