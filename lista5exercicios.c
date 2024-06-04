//Slide Aula 1 - 2 - revisão
#include <stdio.h>
int main() {
    float num1, num2, num3;
    
 
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);
    
    float soma = num1 + num2 + num3;
    float subtracao = num1 - num2 - num3;
    float multiplicacao = num1 * num2 * num3;
  
    if (num2 != 0 && num3 != 0) {
        float divisao = num1 / num2 / num3;
        printf("Divisão: %.2f\n", divisao);
    } else {
        printf("Divisão: Não é possível dividir por zero.\n");
    }
    
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    
    return 0;
}
