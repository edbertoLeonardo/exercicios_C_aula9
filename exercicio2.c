#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAM 5

// Estrutura da pessoa
struct Pessoa {
    char nome[50];
    int tempoAtendimento;
};

int main() {

    struct Pessoa fila[TAM];

    int i;
    int soma = 0;
    float media;

    srand(time(NULL));

    // Enfileirar pessoas
    for(i = 0; i < TAM; i++) {

        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        fgets(fila[i].nome, 50, stdin);
        fila[i].nome[strcspn(fila[i].nome, "\n")] = '\0';

        // Tempo aleatório entre 1 e 15 minutos
        fila[i].tempoAtendimento = rand() % 15 + 1;

        printf("Tempo de atendimento gerado: %d minutos\n",
               fila[i].tempoAtendimento);
    }

    // Retirada da fila
    printf("\n--- Atendimentos ---\n");

    for(i = 0; i < TAM; i++) {

        printf("%s foi atendido em %d minutos\n",
               fila[i].nome,
               fila[i].tempoAtendimento);

        soma += fila[i].tempoAtendimento;
    }

    // Cálculo da média
    media = (float)soma / TAM;

    printf("\nMedia de atendimento: %.2f minutos\n", media);

    // Verificação
    if(media > 8) {
        printf("Recomenda-se abrir um novo caixa.\n");
    } else {
        printf("Nao ha necessidade de abrir um novo caixa.\n");
    }

    return 0;
}