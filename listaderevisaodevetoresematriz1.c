#include <stdio.h>

int main()
{
   int vetor[10];
   int contador = 0;
   
   printf("Digite 10 valores inteiros:\n");
   for(int i = 0; i < 10; i++){
       scanf("%d", &vetor[i]);
   }
   
   for(int i = 0; i < 10; i++){
       if(vetor[i] % 2 == 0){
           contador++;
       }
   }
   
   printf("O numeros de valores pares é: %d\n", contador);

    return 0;
}
