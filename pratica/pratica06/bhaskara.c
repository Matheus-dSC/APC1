#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // delta
    double delta = b * b - 4 * a * c;

    // Verificação do valor de delta
    if (delta < 0) {
        printf("A equacao nao tem raizes reais.\n");
    } 
    else if (delta == 0) {
        // Caso delta seja zero, há uma raiz real
        double x = -b / (2.0 * a);
        printf("A equacao tem uma raiz real: x = %.2f\n", x);
    } 
    else {
        // Caso delta seja positivo, há duas raízes reais
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
  return 0;
}
