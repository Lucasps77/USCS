#include <stdio.h>

int calcularFibonacci(int n);

int main() {
    int n, resultado;

    printf("Digite o valor de n para calcular o termo da sequência de Fibonacci: ");
    scanf("%d", &n);

    resultado = calcularFibonacci(n);

    printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}

int calcularFibonacci(int n) {
   
       int anterior = 0;
       atual = 1;
       int proximo, i;

        for (i = 2; i <= n; i++) {
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }

        return atual;
    
}
