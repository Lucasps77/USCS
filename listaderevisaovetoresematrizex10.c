
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[4][4];
    int i, j;
    int contador = 0;
    
   
   
    for( i = 0; i < 4; i++){
        for( j = 0; j < 4; j++){
            matriz[i][j] = rand() % 20;
        }
    }
    
    
    
    
    printf("matriz gerada\n");
    for( i = 0; i < 4; i++){
        for( j = 0; j < 4; j++){
            printf("|%d|\t", matriz[i][j]);
        }
    }
    printf("\n");
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(matriz[i][j] > 10){
                printf("|%d|\n", matriz[i][j]);
                contador+= 1;
            }
        }
    }

 printf(" a quantidade de numeros maior que 10 é %d", contador);
    return 0;
}
