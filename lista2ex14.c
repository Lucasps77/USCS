#include <stdio.h>
int maior (int vetor[]);
int main()
{
 
   int vetor[3];
   
     
   printf("Digite 3 valores\n");
   for(int i = 0; i < 3; i++){
       scanf("%d", &vetor[i]);
   }

   int maior1 = maior(vetor);
   printf("O maior valor do vetor é %d", maior1);
   
    return 0;
}

int maior(int vetor[]){
     
    int maior1 = 0;
    
    for(int i = 0; i < 3; i++){
       if(maior1 < vetor[i]){
           maior1 = vetor[i];
       }
       
    }
 return maior1; 
}
