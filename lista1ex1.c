#include <stdio.h>

int main() {
    
    float vetor[10];
    float vetor_quadrado[10];
    int i;

    
    printf("Digite os 10 números reais:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        vetor_quadrado[i] = vetor[i] * vetor[i];
    }

   
    printf("Vetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    printf("Vetor com quadrados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor_quadrado[i]);
    }
    printf("\n");

    return 0;
}
