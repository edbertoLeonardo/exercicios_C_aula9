#include <stdio.h>
#include <string.h>

#define TAM 5

// Estrutura da pessoa
struct Pessoa {
    char nome[50];
    int idade;
};

int main() {

    struct Pessoa fila[TAM];

    int i;

    // Cadastro das pessoas
    for(i = 0; i < TAM; i++) {

        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        fgets(fila[i].nome, 50, stdin);
        fila[i].nome[strcspn(fila[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &fila[i].idade);

        getchar(); // limpa ENTER
    }

    printf("\n--- Atendimento Prioritario ---\n");

    // Primeiro atende os prioritários
    for(i = 0; i < TAM; i++) {

        if(fila[i].idade > 65) {

            printf("\nNome: %s\n", fila[i].nome);
            printf("Idade: %d\n", fila[i].idade);
        }
    }

    printf("\n--- Atendimento Normal ---\n");

    // Depois atende os demais
    for(i = 0; i < TAM; i++) {

        if(fila[i].idade <= 65) {

            printf("\nNome: %s\n", fila[i].nome);
            printf("Idade: %d\n", fila[i].idade);
        }
    }

    return 0;
}