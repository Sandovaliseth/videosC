#include<stdio.h>
#include<conio.h>

void main() {

    int i;

    for(i=10; i<=20; i++) {
        superficie(i);
        perimetro(i);
    }

    getch();
    return 0;
}

void superficie(int lado) {
    int superficie = lado*lado;
    printf("\nLa superficie del cuadrado de lado %i es: %i", lado, superficie);
}

void perimetro(int lado) {
    int perimetro = lado*4;
    printf("\nEl perimetro del cuadrado con lado %i es de: %i", lado, perimetro);
}
