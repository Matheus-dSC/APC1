#include <stdio.h>

int main() {
  //ENTRADA
  int numero1;
  int numero2;
  int numero3;

  printf("Entre com um numero inteiro:");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com outro numero inteiro:");
  deu_certo = scanf("%i", &numero2);
  
  printf("Entre com outro numero decimal:");
  deu_certo = scanf("%f", &numero3);
  
  //PROCESSAMENTO
  int soma = numero1 + numero2;
  int sobtracao = numero1 - numero2;
  int multiplicacao = numero1 * numero2;
  int divisao = numero1 / numero2;
  int resto_divisao = numero1 % numero2;
  float fracao = numero1 / numero3;

  //SAIDA
  printf("%i + %i = %i\n", numero1, numero2, soma);
  printf("%i - %i = %i\n", numero1, numero2, sobtracao);
  printf("%i * %i = %i\n", numero1, numero2, multiplicacao);
  printf("%i / %i = %i\n", numero1, numero2, divisao);
  printf("%i / %i = %i\n", numero1, numero3, fracao);
  printf("%i %% %i = %i\n", numero1, numero2, resto_divisao);

  return 0;
}
