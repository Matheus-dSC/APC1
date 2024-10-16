#include <stdio.h>

int main() {
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano); // Lê o valor do ano

     // Verificação se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d e bissexto.\n", ano); // Ano bissexto
    } else {
        printf("O ano %d nao e bissexto.\n", ano); // Ano não bissexto
    }
  return 0;
}
