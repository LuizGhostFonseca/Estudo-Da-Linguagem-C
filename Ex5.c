// 5) Leia uma matriz 4x2 e imprima em quais posições se encontram números positivos e quais números negativos foram inseridos na matriz.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[4][2];
    int posicaoX[8], posicaoY[8], posicaoYImpar[8], posicaoXImpar[8], pares = 0, impares = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
            printf("O numero da posição [%d][%d] é %d\n", i, j, matriz[i][j]);
        }
        
    }

     for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++){
           if((matriz[i][j] % 2) == 0){
               posicaoX[pares] = j;
               posicaoY[pares] = i;
               pares++;
               
           } else{
               posicaoXImpar[impares] = j;
               posicaoYImpar[impares] = i;
               impares++;
               
           }
        }
    }
    for(int i = 0; i < pares; i++) {
        printf("Os numeros pares estão nas posições: [%d][%d]\n", posicaoY[i], posicaoX[i]);
        
    }
    for(int i = 0; i < impares; i++) {
        printf("Os numeros impares estão nas posições: [%d][%d]\n", posicaoYImpar[i], posicaoXImpar[i]);
        
    }
    return 0;
}