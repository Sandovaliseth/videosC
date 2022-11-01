#include<stdio.h>
#include<conio.h>

void main() {
    calcularCuadrado();
    separar();
    producto();
    getch();
    return 0;
}

void calcularCuadrado() {
    int valor, cuadrado;
    printf("Ingrese un valor: ");
    scanf("%i", &valor);
    cuadrado= valor*valor;
    printf("El cuadrado del numero es: %i", cuadrado);
}

void producto() {
    int valor1, valor2, producto;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    producto= valor1*valor2;
    printf("El producto de los dos valores es de: %i", producto);
}

void separar(){
    printf("\n");
}

