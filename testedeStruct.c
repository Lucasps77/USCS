#include <stdio.h>

struct Aluno{
    int RA;
    char nome[50];
    float nota;
};

#include <stdio.h>

int main()
{
   struct Aluno Paulo;
   printf("RA: ");
   scanf("%d", &Paulo.RA);
   printf("nota: ");
   scanf("%f", &Paulo.nota);
   printf("nome: ");
   getchar();
   fgets(Paulo.nome, 50, stdin);

   printf("-----------------\n");
   printf("RA: %d\n", Paulo.RA);
   printf("nota: %.2f\n", Paulo.nota);
   printf("nome: %s \n", Paulo.nome);
   

    return 0;
}
