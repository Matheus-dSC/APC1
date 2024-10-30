#include <stdio.h>

int main() {
    int numero;

    // Lê o número decimal
    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    int decimal = numero;

    // Loop para converter para binário
    for (int i = 128; i > 0; i = i / 2) {
        // Resto da divisão do decimal pelo contador i
        int bit = decimal / i;

        // Imprime o valor do bit
        printf("%i", bit);

        // Atualiza decimal
        decimal = decimal - bit * i;
    }

    printf("\n"); // Para uma nova linha após a impressão
    return 0;
}