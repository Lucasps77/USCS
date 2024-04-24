#include <stdio.h>

int main() {

  int vetor[8];

 
  for (int i = 0; i < 8; i++) {
    printf("Digite o valor da posição %d do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  int x, y;
  printf("Digite o valor de X (entre 1 e 8): ");
  scanf("%d", &x);
  printf("Digite o valor de Y (entre 1 e 8): ");
  scanf("%d", &y);


  if (x < 1 || x > 8 || y < 1 || y > 8) {
    printf("X e Y devem estar entre 1 e 8.\n");
    return 1;
  }


  int soma = vetor[x - 1] + vetor[y - 1];

  printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);

  return 0;
}
