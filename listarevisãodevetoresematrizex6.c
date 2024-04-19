#include <stdio.h>

int main()
{
    float vetor[15];
    float soma = 0;
    
    printf("Digite as notas\n");
    
    for(int i = 0; i < 15; i++){
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    
    float resultado = soma / 15.0;
    printf("A media é %.2f\n", resultado);
    
    

    return 0;
}
