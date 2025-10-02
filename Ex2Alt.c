//2) Dadas duas matrizes 3×3 de floats, calcule e imprima a média dos valores da matriz. Versão alternativa pois não sabia se a pergunta queria isso ou o outro.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma = 0, mediaValores = 0;
    float matrizValores[3][3];
    float matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},matriz2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            soma += matriz1[i][j] + matriz2[i][j];
            matrizValores[i][j] = (matriz1[i][j] + matriz2[i][j])/2;
            
        }
        
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            printf("A media dos valores na matriz é %f ", matrizValores[i][j]);
        }
        printf("\n");
    }

    return 0;
}