#include <stdio.h>
int menor(int a, int b, int c);
int main()
{
 
   int a, b, c;
   printf("Digite 3 valores inteiros\n");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   
     printf("o menor valor é %d", menor(a, b, c));
  
   
    return 0;
}


int menor(int a, int b, int c){
     
    int menor1 = a;
    
    if(a > b){
        menor1 = b;
     } 
     
     if(a > c){
         menor1 = c;
     }
     
     return menor1;
}
