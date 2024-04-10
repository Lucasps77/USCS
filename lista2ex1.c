#include <stdio.h>
int formaTriangulo(int lado1, int lado2, int lado3);
int tipoTriangulo(int lado1, int lado2, int lado3);

int main() {
    int lado1, lado2, lado3;

 
    printf("Digite o primeiro lado do triângulo: ");
    scanf("%d", &lado1);
    printf("Digite o segundo lado do triângulo: ");
    scanf("%d", &lado2);
    printf("Digite o terceiro lado do triângulo: ");
    scanf("%d", &lado3);

 
    if (formaTriangulo(lado1, lado2, lado3)) {
        int qualTriangulo= tipoTriangulo(lado1, lado2, lado3); 
        switch (qualTriangulo) {
            case 1:
                printf("O triângulo é equilátero.\n");
                break;
            case 2:
                printf("O triângulo é isósceles.\n");
                break;
            case 3:
                printf("O triângulo é escaleno.\n");
                break;
        }
    } else {
        printf("Os lados não formam um triângulo.\n");
    }

    return 0;
}


int formaTriangulo(int lado1, int lado2, int lado3) {
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        return 1; 
    } else {
        return 0; 
    }
}

int tipoTriangulo(int lado1, int lado2, int lado3){
    if (lado1 == lado2 && lado2 == lado3){
        return 1;
} else {
    if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        return 2;
    } else {
        return 3;
    }
  }
}
