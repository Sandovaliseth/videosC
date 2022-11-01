#include<stdio.h>
#include<conio.h>

void main() {
    presentacion();
    cargarSuma();
    finalizacion();
    getch();
    return 0;
}

void presentacion() {
    printf("Programa que permite cargar valores por teclado, sumarlos y mostrar resultado");
    printf("\n");
}

void cargarSuma() {
    int valor1, valor2, suma;
    printf("\nIngrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    suma= valor1+valor2;
    printf("La suma es: %i", suma);
}

void finalizacion() {
    printf("\nGracias por utilizar el programa");
}
