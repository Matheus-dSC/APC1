#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    //Verifica se a temperatura e maior que 40.0f
    if (temperatura > 40.0f) {
        printf("Muito quente\n");
    }
    //Verifica se a temperatura esta entre 30.0f e 40.0f
    else if (temperatura > 30.0f && temperatura <= 40.0f) {
        printf("Quente\n");
    }
    //Verifica se a temperatura esta entre 20.0f e 30.0f
    else if (temperatura > 20.0f && temperatura <= 30.0f) {
        printf("Agradavel\n");
    }
    //Se a temperatura e menor que 20.0f
    else {
        printf("Frio\n");
    }
  return 0;
}
