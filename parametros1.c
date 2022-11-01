#include<stdio.h>
#include<conio.h>

void main() {
    int valor1, valor2;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    mayor(valor1, valor2);
    getch();
    return 0;
}

void mayor(int valor1, int valor2) {
    if(valor1>valor2) {
        printf("El valor mayor es: %i", valor1);
    } else {
        printf("El valor mayor es: %i", valor2);
    }
}
