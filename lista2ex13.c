#include <stdio.h>
int maior(int a, int b);
int main()
{
 
   int a, b;
   printf("Digite 2 valores inteiros\n");
   scanf("%d", &a);
   scanf("%d", &b);
   
     printf("o maior valor é %d", maior(a, b));
  
   
    return 0;
}


int maior(int a, int b){
     
    int maior1 = a;
     
     if(a < b){
        maior1 = b;
     } 
     return maior1;
}
