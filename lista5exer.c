//SLIDES UNIDADE 2 - ALG_EST_II_Unidade_2
#include <stdio.h>
double calcular_media(double valor1, double valor2);

int main() {
    double valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);
    double media = calcular_media(valor1, valor2);
    printf("A média aritmética dos valores %.2f e %.2f é: %.2f\n", valor1, valor2, media);
    return 0;
}
double calcular_media(double valor1, double valor2) {
    return (valor1 + valor2) / 2.0;
}
