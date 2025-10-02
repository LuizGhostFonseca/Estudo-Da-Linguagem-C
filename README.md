# Estudo-Da-Linguagem-C

## Aprendizados
1 - Como preencher matrizes e vetores:
```
// para valores definidos
int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
float vetores[10] = {1, 2, 3, 4.2, 5, 6, 7.3, 8, 9.5, 10.5};
//  para quando o usuario vai preencher
for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            printf("Digite um número: \n");
            scanf("%d", &matriz[i][j]);
        }
    }
for(int i = 0; i < 3; i++) {
        printf("Digite um número: \n");
        scanf("%f", &vetores[i]);
    }
```
2 - Como utilizar Matrizes e Vetores em diversos casos:
```
// 1) Leia uma matriz 3×3 de inteiros e calcule a soma dos valores da matriz.
#include <stdio.h>
#include <locale.h>
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
    return 0;
}
```
```
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
```
3 - Melhora no pensamento lógico e resolução de problemas.
