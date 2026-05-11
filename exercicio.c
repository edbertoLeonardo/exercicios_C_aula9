#include <stdio.h>

#include <stdio.h>
#include <string.h>

#define TAM 5

// Estrutura da pessoa
struct Pessoa {
    char nome[50];
    char cpf[20];
    char dataNascimento[15];
    char motivoVisita[20];
};

int main() {

    struct Pessoa fila[TAM];

    int i;
    int reclamar = 0;
    int elogiar = 0;

    // Cadastro das pessoas
    for(i = 0; i < TAM; i++) {

        printf("\nPessoa %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", fila[i].nome);

        printf("CPF: ");
        scanf("%s", fila[i].cpf);

        printf("Data de nascimento: ");
        scanf("%s", fila[i].dataNascimento);

        printf("Motivo da visita (Reclamar/Elogiar): ");
        scanf("%s", fila[i].motivoVisita);
    }

    // Retirada da fila e contagem
    for(i = 0; i < TAM; i++) {

        printf("\nAtendendo: %s\n", fila[i].nome);

        if(strcmp(fila[i].motivoVisita, "Reclamar") == 0) {
            reclamar++;
        }
        else if(strcmp(fila[i].motivoVisita, "Elogiar") == 0) {
            elogiar++;
        }
    }

    // Exibir em ordem crescente
    printf("\nResultado:\n");

    if(reclamar < elogiar) {
        printf("%d pessoas vieram reclamar.\n", reclamar);
        printf("%d pessoas vieram elogiar.\n", elogiar);
    } else {
        printf("%d pessoas vieram elogiar.\n", elogiar);
        printf("%d pessoas vieram reclamar.\n", reclamar);
    }

    // Texto final
    printf("\nNa fila de hoje tivemos %d pessoas que vieram reclamar e %d para elogiar.\n",
           reclamar, elogiar);

    return 0;
}