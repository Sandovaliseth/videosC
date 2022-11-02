#include<stdio.h>
#include<conio.h>

int main() {

    int lado;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%i", &lado);
    int sup = retornarSuperficie(lado);
    printf("\nLa superficie del cuadrado de lado %i es %i", lado, sup);

    getch();
    return 0;
}

int retornarSuperficie(int lado) {
    int superficie = lado*lado;
    return superficie;
}
