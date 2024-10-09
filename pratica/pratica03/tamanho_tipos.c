#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("O tipo 'char' ocupa na memoria = %lu byte(s).\n", sizeof(char));
  printf("O tipo 'int' ocupa na memória = %lu byte(s).\n", sizeof(int));
  printf("O tipo 'float' ocupa na memória = %lu byte(s) .\n", sizeof(float));
  printf("O tipo 'double' ocupa na memória = %lu byte(s).\n", sizeof(double));
  printf("O tipo 'void' ocupa na memória = %lu byte(s) .\n", sizeof(void));
  
  printf("a faixa de valores do char: %i a %i\n", -127, 128);
  printf("a faixa de valores do char: %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf("a faixa de valores do int: %i a %i\n", INT_MIN, INT_MAX);
  printf("a faixa de valores do float: %i a %i\n", FLT_MIN, FLT_MAX);
  printf("a faixa de valores do double: %E a %E\n",DBL_MIN, DBL_MAX);
  printf("\n");
  char tecla = 'A';
  printf("valor de tecla: %c\n", tecla);
  int idade = 25;
  printf("valor de idade: %i\n", idade);
  float nota = 8.6f; // 6 casas decimais
  printf("valor de nota: %f\n", nota);
  double pi = 3.141592; // 12 casas decimais
  printf("valor de pi: %.10f\n", pi);
  idade = 50;
  printf("valor de idade: %i\n", idade);
  printf("\n");
  const float PI = 3.14f;
  printf("valor da canstante PI: %f\n", PI);
  //PI = 3.14156f; //DEU ruim!!!
  printf("\n");
  printf("tamanho do short int na memoria = %lu byte(s)\n", sizeof(short int));
  printf("tamanho do long int na memoria = %lu byte(s)\n", sizeof(long int));
  printf("tamanho do long double na memoria = %lu byte(s)\n", sizeof(long double));
  printf("\n");
  printf("a faixa de valores do short int: %i ate %i\n", SHRT_MIN, SHRT_MAX);
  printf("a faixa de valores do long int: %li ate %li\n", LONG_MIN, LONG_MAX);
  printf("a faixa de valores do long double: %LE ate %LE\n", LDBL_MIN, LDBL_MAX);
  return 0;
}
