// 1 - Fazer os programas abaixo em Linguagem C utilizando obrigatoriamente matrizes unidimensionais e bidimensionais.
/* Leia uma matriz numérica de dimensão 3x3, calcule e imprima: Quantos números positivos foram inseridos na matriz; 
Quais os números pares que foram inseridos na matriz e se há numeros zero inseridos na matriz e quais suas posições. 
Imprimir também ao final a matriz lida colocando no lugar do números zero inseridos, o valor -1000.*/

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3], pares = 0, positivos = 0, paresImprimir[9], zeros = 0, posicaoY[9], posicaoX[9];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite um numero para preencher a matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j]% 2 == 0)
            {
                paresImprimir[pares] = matriz[i][j];
                pares++;
                if (matriz[i][j] == 0)
                {
                    posicaoX[zeros] = j;
                    posicaoY[zeros] = i;
                    zeros++;
                }
            }
            if (matriz[i][j] >= 0)
            {
                positivos++;
            }
            
        }
    } 
    
    printf("O total de números positivos inseridos na matriz é de: %d\n", positivos);
    for (int i = 0; i < pares; i++)
    {
         printf("Os numeros pares inseridos na matriz foram: %d\n", paresImprimir[i]);
    }
    if (zeros > 0)
    {
        printf("Há zeros na matriz\n");
        for (int i = 0; i < zeros; i++)
        {
            printf("Localizado em [%d][%d]\n", posicaoY[i], posicaoX[i]);
        }
    } else{
        printf("Não há zeros na matriz\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] == 0)
            {
                matriz[i][j] = -1000;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
    
    
}