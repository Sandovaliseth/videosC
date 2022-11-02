#include<stdio.h>
#include<conio.h>

int main() {

    int lado;
    printf("Ingrese el lado de un cuadrado: ");
    scanf("%i", &lado);
    printf("El perimetro del cuadrado con lado %i es de: %i", lado, retornarPerimetro(lado));

    getch();
    return 0;
}

int retornarPerimetro(int lado) {
    int perimetro = lado*4;
    return perimetro;
}

