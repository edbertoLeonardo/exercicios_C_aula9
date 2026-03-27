#include <stdio.h>

int main() {
    int funcionarioA[3] = {8, 7, 9};
    int funcionarioB[3] = {6, 7, 10};

    int pontosA = 0;
    int pontosB = 0;

    for (int i = 0; i < 3; i++) {
        if (funcionarioA[i] > funcionarioB[i]) {
            pontosA++;
        } else if (funcionarioB[i] > funcionarioA[i]) {
            pontosB++;
        }
    }

    printf("Pontuacao do Funcionario A: %d\n", pontosA);
    printf("Pontuacao do Funcionario B: %d\n", pontosB);

    return 0;
}
