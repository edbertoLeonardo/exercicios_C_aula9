#include <stdio.h>

int main() {
    // -----------------------------
    // Exercício 1: Valores de trás para frente
    // -----------------------------
    int vetor1[] = {1, 2, 3, 4, 5};
    int tamanho1 = 5;

    printf("Exercicio 1 - Valores de tras para frente:\n");
    for (int i = tamanho1 - 1; i >= 0; i--) {
        printf("%d ", vetor1[i]);
    }
    printf("\n\n");

    // -----------------------------
    // Exercício 2: Números acima de 5 e letras alternadas
    // -----------------------------
    int vetor2[] = {2, 8, 5, 10, 3, 7};
    int tamanho2 = 6;

    printf("Exercicio 2a - Numeros acima de 5:\n");
    for (int i = 0; i < tamanho2; i++) {
        if (vetor2[i] > 5) {
            printf("%d ", vetor2[i]);
        }
    }
    printf("\n");

    char sobrenome[] = "caparroz"; // seu sobrenome
    printf("Exercicio 2b - Letras alternadas do sobrenome:\n");
    for (int i = 0; sobrenome[i] != '\0'; i += 2) {
        printf("%c", sobrenome[i]);
    }
    printf("\n\n");

    // -----------------------------
    // Exercício 3: Idades ímpares
    // -----------------------------
    int idades[] = {21, 34, 45, 50, 67, 18};
    int tamanho3 = 6;

    printf("Exercicio 3 - Idades impares:\n");
    for (int i = 0; i < tamanho3; i++) {
        if (idades[i] % 2 != 0) {
            printf("%d ", idades[i]);
        }
    }
    printf("\n");

    return 0;
}