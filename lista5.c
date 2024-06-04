//slides 1 e 2
#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("Digite um valor: ");
    scanf("%lf", &num);
    double cubo = pow(num, 3);
    double quadrado = pow(num, 2);
    double raizCubica = cbrt(num);
    
    printf("Número ao cubo: %.2f\n", cubo);
    printf("Número ao quadrado: %.2f\n", quadrado);
    printf("Raiz cúbica do número: %.2f\n", raizCubica);
    
    return 0;
}
