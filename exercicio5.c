#include <stdio.h>

int main() {
    char s[51]; // máximo 50 caracteres + '\0'
    int vogais = 0;
    int consoantes = 0;

    printf("Digite uma string (ate 50 caracteres, minusculas apenas):\n");
    fgets(s, 51, stdin); // lê a string com espaços

    // percorre a string até o final ou '\n'
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        char c = s[i];

        // considera apenas letras minúsculas
        if (c >= 'a' && c <= 'z') {
            // verifica se é vogal
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    printf("%d %d\n", vogais, consoantes);

    return 0;
}