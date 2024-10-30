#include <stdio.h>

int main() {
    int numero;

    // Lê um número do usuário
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Laço for que vai de 1 a 101
    for (int i = 1; i <= 101; i++) {
        // Verifica se i e multiplo de numero
        if (i % numero == 0) {
            printf("%d e multiplo de %d\n", i, numero);
        }
    }

    return 0;
}