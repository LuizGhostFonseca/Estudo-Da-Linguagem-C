// 1 - Fazer os programas abaixo em Linguagem C utilizando obrigatoriamente matrizes unidimensionais e bidimensionais.
/* A) Leia um vetor de 45 elementos referentes as notas dos alunos do 2 período de sistemas de informação na disciplina de programação estruturada. 
Apresente a média geral da turma, a maior e amonr nota alcançada pelos estudantes*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float notas[45], media, maior, menor, salvarNotas;
    for(int i = 0; i < 45; i++){
        printf("Digite a nota de um aluno: \n");
        scanf("%f", &notas[i]);
        salvarNotas += notas[i];
    }
    media = salvarNotas / 45;
    maior = notas[0];
    menor = notas[1];
    for (int i = 0; i < 45; i++)
    {
        if (maior > notas[i])
        {
            maior = notas[i];
        }
        if (menor < notas[i])
        {
            menor = notas[i];
        }
    }

    printf("A media geral da turma ficou de: %.02f e a menor nota foi %.02f, já a maior nota foi %.02f ", media, menor, maior);
    
    return 0;
    
}