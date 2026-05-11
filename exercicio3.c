#include <stdio.h>
#include <string.h>

#define TAM 5

// Estrutura do documento
struct Documento {
    int codigoProcesso;
    char nomeArquivo[50];
    int quantidadeBytes;
};

int main() {

    struct Documento fila[TAM];

    int i;

    // Enfileirar documentos
    for(i = 0; i < TAM; i++) {

        printf("\nDocumento %d\n", i + 1);

        printf("Codigo do processo: ");
        scanf("%d", &fila[i].codigoProcesso);

        getchar(); // limpa o ENTER do teclado

        printf("Nome do arquivo: ");
        fgets(fila[i].nomeArquivo, 50, stdin);
        fila[i].nomeArquivo[strcspn(fila[i].nomeArquivo, "\n")] = '\0';

        printf("Quantidade em bytes: ");
        scanf("%d", &fila[i].quantidadeBytes);

        getchar();
    }

    // Desenfileirar documentos
    printf("\n--- Impressao dos documentos ---\n");

    for(i = 0; i < TAM; i++) {

        printf("\nDocumento retirado da fila:\n");

        printf("Codigo do processo: %d\n",
               fila[i].codigoProcesso);

        printf("Nome do arquivo: %s\n",
               fila[i].nomeArquivo);

        printf("Quantidade em bytes: %d bytes\n",
               fila[i].quantidadeBytes);
    }

    return 0;
}