#include <stdio.h>

int somar (int vetor[]);

int main()
{
 
   int vetor[3];
   
     
   printf("Digite 3 valores\n");
   for(int i = 0; i < 3; i++){
       scanf("%d", &vetor[i]);
   }

   int soma = somar(vetor);
   
   printf("A soma do valores do vetor %d", soma);
   
    return 0;
}


int somar(int vetor[]){
     
    int soma = 0;
    
    for(int i = 0; i < 3; i++){
       soma += vetor[i];
       
    }
      return soma;  
} 
