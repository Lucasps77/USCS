#include <stdlib.h>
#include <stdio.h>

int main()
{
    int matriz[4][4];
    int i, j;
    int maior, posi, coluna;
    
    
      printf("Gerando elemento aleatórios\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 50; //gera valores aleatórios na matriz
        }
    }
   
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
          if(matriz[i][j] > maior){
              maior = matriz[i][j];
              posi = i;
              coluna = j;
          }
        }
    }
    printf("\n");

printf("%d é o maior valor na matriz\n", maior);
printf("%d %d é a localização na matriz\n", posi, coluna);

    return 0;
}
