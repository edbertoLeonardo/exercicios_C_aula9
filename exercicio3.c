#include <stdio.h>

int main() {
    // Notas dos funcionários: [produtividade, qualidade, pontualidade]
    int funcionarioA[3] = {8, 9, 7};
    int funcionarioB[3] = {7, 9, 10};

    int pontosA = 0;
    int pontosB = 0;

    // Comparar as três categorias
    for (int i = 0; i < 3; i++) {
        if (funcionarioA[i] > funcionarioB[i]) {
            pontosA++;
        } else if (funcionarioB[i] > funcionarioA[i]) {
            pontosB++;
        }
        // Se forem iguais, nenhum ponto é atribuído
    }

    printf("Pontuacao do Funcionario A: %d\n", pontosA);
    printf("Pontuacao do Funcionario B: %d\n", pontosB);

    return 0;
}