#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2, suma, diferencia, producto, division;
    printf("Ingrese el primer valor:");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor:");
    scanf("%i", &num2);
    if(num1>num2){
        suma = num1+num2;
        diferencia = num1-num2;
        printf("La suma de los dos valores es de: %i",suma);
        printf("\nLa resta de los dos valores es de: %i",diferencia);
    } else {
        producto = num1*num2;
        division = num1/num2;
        printf("La multiplicacion o producto de los valores es de: %i",producto);
        printf("\nLa division de los dos valores es de: %i",division);
    }
    getch();
    return 0;
}
