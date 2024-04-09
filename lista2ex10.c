#include <stdio.h>
int maior(int a, int b, int c);
int main()
{
 
   int a, b, c;
   printf("Digite 3 valores inteiros\n");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   
     printf("o maior valor é %d", maior(a, b, c));
  
   
    return 0;
}


int maior(int a, int b, int c){
     
    int maior1 = a;
    
    if(a < b){
        maior1 = b;
     } 
     
     if(a < c){
         maior1 = c;
     }
     
     return maior1;
}
