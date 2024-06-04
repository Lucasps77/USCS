//SLIDES UNIDADE 2 - ALG_EST_II_Unidade_2
#include <stdio.h>

double menor_valor(double valor1, double valor2);

int main() {

    double valor1, valor2;
    
  
    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);
    
    double menor = menor_valor(valor1, valor2);

    printf("O menor valor entre %.2f e %.2f é: %.2f\n", valor1, valor2, menor);
    
    return 0;
}

double menor_valor(double valor1, double valor2) {
    if (valor1 < valor2) {
        return valor1;
    } else {
        return valor2;
    }
}
