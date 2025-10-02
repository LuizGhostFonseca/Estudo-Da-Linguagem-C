//3) Leia uma matriz 3×3, encontre e imprima o menor valor e sua posição (linha, coluna).
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float matriz[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            scanf("%f", &matriz[i][j]);
            printf("O numedo da posição [%d][%d] é %.02f\n", i, j, matriz[i][j]);
        }
        
    }
    float menor = matriz[0][0];
     for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            if(menor > matriz[i][j]){
                menor = matriz[i][j];
            }
        }
    }
   printf("O menor valor é %.02f", menor);

    return 0;
}