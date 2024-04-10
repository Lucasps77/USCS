#include <stdio.h>
int nmaior(int n1, int n2);
int mmc(int n1, int n2);
int main() {
    int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    printf("O MMC de %d e %d é %d.\n", n1, n2, mmc(n1, n2));
    return 0;
}
int nmaior(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}
int mmc(int n1, int n2) {
    int maior = nmaior(n1, n2);
    int resultado = maior;

    while(1) {
        if (resultado % n1 == 0 && resultado % n2 == 0) {
            break;
        }
        resultado += maior;
    }
    return resultado;
}
