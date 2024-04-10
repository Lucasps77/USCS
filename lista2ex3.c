#include <stdio.h>
int primo(int num);
int somaPrimos(int limite);
int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (primo(numero)) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    printf("A soma de todos os numeros primos ate %d e: %d\n", numero, somaPrimos(numero));

    return 0;
}
int primo(int num) {
    int i;
  
    if (num <= 1) {
        return 0;
    }

   
    for (i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1; 
}
int somaPrimos(int numeros) {
    int soma = 0;
    int i;

    for (i = 2; i <= numeros; i++) {
        if (primo(i)) {
            soma += i;
        }
    }

    return soma;
}

