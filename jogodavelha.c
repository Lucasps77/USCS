#include <stdio.h>// Blibliotecas de C
#include <stdlib.h>// Blibliotecas de C
#include <string.h>// Blibliotecas de C
//protótipo das funções
int menu();
int jogarJogo();
int sairAgora();
char tabuleiro[3][3];
void mostrarTabuleiro();
void iniciarTabuleiro();
int jogada(char jogador);
int empate();
int vencedor();

int main(){

menu();

    return 0;
}

//Menu para interativo
int menu(){
   
   int opcao;

   printf("Escolha uma opção\n");
   printf("1 - Jogar\n");
   printf("2 - Sair\n");

   scanf("%d", &opcao);

   switch(opcao){
    case 1:
    jogarJogo();
    break;
    case 2:
    sairAgora();
    break;
    default:
    printf("Opção invalida\n");
    menu();

    return 0;
   }

}
// função para jogar
int jogarJogo(){
   int pontos = 0;
   iniciarTabuleiro();
   mostrarTabuleiro();

   char primeiroJogador = 'X';
   while(1){
     if(jogada(primeiroJogador)){
        mostrarTabuleiro();
        if(vencedor()){
            
            printf("Parabéns jogador %c, você venceu!\n", primeiroJogador);
            break;
            
            printf("\n");
        }
        if(empate()){
            printf("deu velha!!\n");
            break;
        }
        primeiroJogador = (primeiroJogador == 'X') ? 'O' : 'X'; 
        
     }
    
   }
   menu();
}
//função para sair do jogo
int sairAgora(){
    char op[3];

    printf("Você deseja fechar o jogo ?\n");
    printf("Digite s(sim) / n(não)\n");
    scanf("%s", op);

//Verificar a opção escolhida
if (strcmp(op, "n") == 0 || strcmp(op, "não") == 0 || strcmp(op, "N") == 0 || strcmp(op, "Não") == 0) {
        menu();
    }
    else if (strcmp(op, "s") == 0 || strcmp(op, "sim") == 0 || strcmp(op, "S") == 0 || strcmp(op, "Sim") == 0) {
        printf("Encerrando o jogo...\n");
        exit(0);
    } else{
        printf("Opção invalida\n");
        sairAgora();
    }
}
//começar o tabuleiro
void iniciarTabuleiro(){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        tabuleiro[i][j] = ' ';
    }
  }
}
//construir o tabuleiro
void mostrarTabuleiro(){
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}
   

 int jogada(char jogador){
    int linha, coluna;
   
    printf("Digite a linha (1 a 3) e a coluna (1 a 3) separadamente\n"); 
    scanf("%d %d", &linha, &coluna);

    linha--;
    coluna--;

    if(linha < 0 || linha > 2 || coluna < 0 || coluna > 2){
        printf("jogada invalida\n");
        return 0;
    } else if(tabuleiro[linha][coluna] != ' '){
        printf("Jogada invalida: posição ja foi ocupada.\n");
        return 0;
    }
        
     
     tabuleiro[linha][coluna] = jogador;
     return 1;
   }

int empate(){
   for(int i = 0; i < 3; i++){
     for(int j = 0; j < 3; j++){
        if(tabuleiro[i][j] == ' '){
            return 0; // possui jogadas
        }
     }
   }
   return 1; // não tem jogadas possíveis, empate
}

int vencedor(){
    for (int i = 0; i < 3; i++) {
        if ((tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') || 
            (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')) {
            return 1; // Possui um vencedor
        }
    }
    
    if ((tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') ||
        (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')) {
        return 1; // Possui um vencedor
    }

    return 0; // Sem vencedor;
}


