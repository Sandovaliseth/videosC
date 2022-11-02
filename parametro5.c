#include<stdio.h>
#include<conio.h>

void main() {
    int numero1, numero2, numero3;

    printf("Ingrese el primer valor: ");
    scanf("%i", &numero1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &numero2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &numero3);

    numeroMayor(numero1, numero2, numero3);

    getch();
    return 0;
}

void numeroMayor(int valor1, int valor2, int valor3) {
    if(valor1>valor2 && valor1>valor3) {
        printf("El numero mayor es: %i", valor1);
    } else {
        if(valor2>valor3) {
            printf("El numero mayor es: %i", valor2);
        } else {
            printf("El numero mayor es: %i", valor3);
        }
    }
}
