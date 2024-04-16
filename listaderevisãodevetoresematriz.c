#include <stdio.h>

int main() {

    float vetor_original[10];
    float vetor_quadrado[10];

 
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor_original[i]);
    }

   
    for (int i = 0; i < 10; i++) {
        vetor_quadrado[i] = vetor_original[i] * vetor_original[i];
    }

    printf("Vetor original:\n[");
    for (int i = 0; i < 10; i++) {
        printf("%.2f", vetor_original[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("]\n");


    printf("Vetor dos quadrados:\n[");
    for (int i = 0; i < 10; i++) {
        printf("%.2f", vetor_quadrado[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
