#include<stdio.h>
#include<conio.h>

void main() {
    suma();
    separar();
    suma();
    getch();
    return 0;
}

void suma() {
    int valor1, valor2, suma;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    suma= valor1+valor2;
    printf("La suma es: %i", suma);
}

void separar(){
    printf("\n--------------------------------------- \n");
}
