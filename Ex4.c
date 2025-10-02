//4) Leia uma matriz 4×4 de valores numéricos. Leia um valor numérico qualquer e imprima a mensagem conforme a condição: ?O valor lido está na matriz? ou ?O valor lido não está na matriz?.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float matriz[4][4], inputUser, achou = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            scanf("%f", &matriz[i][j]);
            printf("O numero da posição [%d][%d] é %.02f\n", i, j, matriz[i][j]);
        }
        
    }
    printf("Imprima um numero para checar se ele esta na matriz\n");
    scanf("%f", &inputUser);
     for(int i = 0; i < 4; i++) {
       if(achou == 0){
        for(int j = 0; j < 4; j++){
            if(inputUser == matriz[i][j]){
                printf("Seu numero [%.02f] esta na matriz!\n ", inputUser);
                achou++;
                break;
            } 
        }
       }
    }
    if(achou != 1) {
        printf("Seu numero não está na matriz");
        
    }
    return 0;
}
