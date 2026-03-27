#include <stdio.h>

int main() {
    int reproducoes[] = {120, 150, 80, 200, 300, 250};
    int tamanho = 6;

    int maiorSoma = 0;
    int dia1 = 0, dia2 = 1;

    for (int i = 0; i < tamanho - 1; i++) {
        int soma = reproducoes[i] + reproducoes[i + 1];

        if (soma > maiorSoma) {
            maiorSoma = soma;
            dia1 = i;
            dia2 = i + 1;
        }
    }

    printf("Maior soma: %d\n", maiorSoma);
    printf("Dias: [%d, %d]\n", dia1, dia2);

    return 0;
}