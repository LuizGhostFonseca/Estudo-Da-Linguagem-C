#include <stdio.h>
#include <locale.h>

// 1) Leia uma matriz 3×3 de inteiros e calcule a soma dos valores da matriz.
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3], soma = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
            printf("O numero da posição [%d][%d] é %d\n", i, j, matriz[i][j]);
            soma += matriz[i][j];
            printf("O valor da soma atual é de %d\n", soma);
        }
        
    }
   printf("a soma é %d", soma);
   float vetores[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   for (int i = 0; i < 9; i++)
   {
    printf("\n%f", vetores[i]);
   }
   
    return 0;
}