#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2, num3, suma, producto;
    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &num3);
    if(num1==num2 && num1==num3){
            suma = num1+num2;
            producto = suma*num3;
            printf("Suma: %i", suma);
            printf("\nMultiplicacion: %i", producto);
    }

    getch();
    return 0;
}

