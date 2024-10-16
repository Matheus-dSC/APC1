#include <stdio.h>

int main() {
      float valor_bruto; 
      float valor_desconto;
    // Exemplo de atribuição para testar
    valor_bruto = 300.00f;  //teste
    if (valor_bruto <= 100.00f) {
        valor_desconto = valor_bruto * 0.01f;  // Desconto de 1%
    } 
    else if (valor_bruto <= 500.00f) {
        valor_desconto = valor_bruto * 0.05f;  // Desconto de 5%
    } 
    else {
        valor_desconto = valor_bruto * 0.1f;    // Desconto de 10%
    }
    printf("Valor Bruto: %.2f\n", valor_bruto);
    printf("Valor Desconto: %.2f\n", valor_desconto);
  return 0;
}
