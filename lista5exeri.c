//SLIDER UNIDADE 2 - MODULARIZAÇÃO

#include <stdio.h>
int posicao_maior(int a, int b, int c);
int main() {
    int a, b, c;

    printf("Digite o primeiro valor (a): ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor (b): ");
    scanf("%d", &b);
    
    printf("Digite o terceiro valor (c): ");
    scanf("%d", &c);
 
    int posicao = posicao_maior(a, b, c);
    
    // Exibe o resultado
    printf("A posição do maior valor entre a=%d, b=%d e c=%d é: %d\n", a, b, c, posicao);
    
    return 0;
}

int posicao_maior(int a, int b, int c) {
    if (a >= b && a >= c) {
        return 1;  // a é o maior
    } else if (b >= a && b >= c) {
        return 2;  // b é o maior
    } else {
        return 3;  // c é o maior
    }
}
