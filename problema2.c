#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2, num3, num4, suma, producto;
    printf("Ingrese el primer numero:");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero:");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero:");
    scanf("%i", &num3);
    printf("Ingrese el cuarto numero:");
    scanf("%i", &num4);
    suma=num1+num2;
    producto=num3*num4;
    printf("La suma de los dos primeros numeros es:");
    printf("%i", suma);
    printf("\nEl producto del tercer y cuarto valor es:");
    printf("%i", producto);
    getch();
    return 0;
}

