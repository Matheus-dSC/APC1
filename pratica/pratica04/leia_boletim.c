#include <stdio.h>

int main() {
  
  int matricula;          
  float a1, a2, media;    

  printf("Digite a matrícula: ");
  scanf("%d", &matricula);

  printf("Digite a nota 1: ");
  scanf("%f", &a1);

  printf("Digite a nota 2: ");
  scanf("%f", &a2);

  media = (a1 + a2) / 2;
  
  printf("\nBoletim de Notas:\n");
  printf("matricula:\t%d\n",matricula);
  printf("Nota 1:\t\t%.2f\n",a1);
  printf("Nota 2:\t\t%.2f\n",a2);
  printf("Média:\t\t%.2f\n", media);
   
  return 0;
}
