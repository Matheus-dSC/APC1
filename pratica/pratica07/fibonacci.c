
Copiar código
#include <stdio.h>

int main() {
    int n;
    int anterior = 0;
    int proximo = 1;
    
    // Lê o número de termos da sequência de Fibonacci
    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    // Loop para calcular e imprimir a sequência de Fibonacci
    for (int i = 0; i < n; i++) {
        // Imprime o valor atual de proximo
        printf("%i, ", proximo);
        
        // Variável auxiliar para armazenar o valor atual de proximo
        int auxiliar = proximo;

        // Atualiza proximo para a soma de anterior e proximo
        proximo = anterior + proximo;

        // Atualiza anterior para o valor da variável auxiliar
        anterior = auxiliar;
    }
    // Para uma nova linha após a impressão
    printf("\n"); 
    return 0;
}