#include <stdio.h>

int main()
{
  struct ficha_de_aluno{
      char nome[50];
      char disciplina[30];
      double nota_prova1;
      double nota_prova2;
  };
  
  struct ficha_de_aluno aluno;
  printf("\n-----------Cadastro de aluno-----------\n\n\n");
  printf("Nome de aluno: ");
  fgets(aluno.nome, 50, stdin);
  
   printf("Disciplina: ");
   fgets(aluno.disciplina, 30, stdin);
   
   printf("Informe a primeira nota !");
   scanf("%lf", &aluno.nota_prova1);
   
   printf("Informe a segunda nota!");
   scanf("%lf". &aluno.nota_prova2);
   
   printf("DADOS\N");
   printf("Nome:%s", aluno.nome);
   printf("Disciplina:%s", aluno.disciplina);
   printf("Nota da prova N1: %.2f\n", aluno.nota_prova1);
   printf("Nota da prova N2: %.2f\n", aluno.nota_prova2);
   
  
    return 0;
}
