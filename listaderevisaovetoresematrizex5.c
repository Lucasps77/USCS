#include <stdio.h>

int main()
{
    int i;
    int vetor[6];
    int vector[6];
    
    
    for(int i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 5; i >= 0; i--){
        printf("%d ", vetor[i]);
    }
    

    return 0;
}
