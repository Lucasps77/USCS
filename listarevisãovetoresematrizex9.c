#include <stdio.h>

int fazerVetor(int vetor[10]);

int fazerVetor(int vetor[10]){

int i;

 printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }


    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }


    printf("Vetor modificado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

}



int main()
{
  int vetor[10];
   fazerVetor(vetor);

    return 0;
}
