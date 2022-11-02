#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);

    int numero= mayor(num1, num2);
    printf("El numero mayor es: %i", numero);

    getch();
    return 0;
}

int mayor(int valor1, int valor2) {

    /*int mayor;

    if(valor1>valor2) {
        mayor= valor1;
    } else {
        mayor= valor2;
    }

    return mayor; */

    if(valor1>valor2) {
        return valor1;
    } else {
        return valor2;
    }

}

