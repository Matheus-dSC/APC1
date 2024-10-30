#include <stdio.h>

int main() {
    int numero, maior, menor;

    // Lê o primeiro número
    printf("Digite um número (0 para sair): ");
    scanf("%d", &numero);

    // Inicializa maior e menor com o primeiro número
    maior = numero;
    menor = numero;

    // Loop enquanto numero for diferente de zero
    while (numero != 0) {
        // Verifica se numero é maior que maior
        if (numero > maior) {
            maior = numero;
        }
        
        // Verifica se numero é menor que menor
        if (numero < menor) {
            menor = numero;
        }

        // Lê o próximo número
        printf("Digite um número (0 para sair): ");
        scanf("%d", &numero);
    }

    // Imprime o maior e menor
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}