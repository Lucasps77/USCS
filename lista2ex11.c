#include <stdio.h>

int maximo(int a, int b, int c, int *menor);

int main() {
    int a, b, c;
    int maior, menor;
    
    printf("Digite 3 valores inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    maior = maximo(a, b, c, &menor);
    
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
   
    return 0;
}

int maximo(int a, int b, int c, int *menor) {
    int maior1 = a;
    *menor = a;
    
    if (b > maior1) {
        maior1 = b;
    }
    if (c > maior1) {
        maior1 = c;
    }
    
    if (b < *menor) {
        *menor = b;
    }
    if (c < *menor) {
        *menor = c;
    }
    
    return maior1;
}
