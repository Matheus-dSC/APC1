#include <stdio.h>

int main() {
  char produto[21]; 
  int quantidade;   
  float valor, media;      

  printf("Digite o nome do produto (máx. 20 caracteres): ");
  scanf("%20s", produto); 

  printf("Digite a quantidade: ");
  scanf("%d", &quantidade);

  printf("Digite o valor do produto: ");
  scanf("%f", &valor);
  
  media = valor * quantidade;
  printf("\n==============================\n");
  printf("         P E D I D O\n");
  printf("==============================\n");
  printf("Produto         Qtd Valor Unit\n");
  printf("%-15s%4d%10.2f\n", produto, quantidade, valor);
  printf("==============================\n");
  return 0;
}
