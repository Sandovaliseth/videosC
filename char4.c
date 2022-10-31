#include<stdio.h>
#include<conio.h>

int main() {

    int num1, num2, suma=0, resta=0, producto=0, division=0;
    char operaciones;

    printf("Ingrese un valor:  ");
    scanf("%i", &num1);
    printf("Ingrese un segundo valor:  ");
    scanf("%i", &num2);

    printf("Que operacion quierer hacer con los valores ingresados [+, -, *, /]: ");
    scanf(" %c", &operaciones);

    if(operaciones=='+') {
        suma=num1+num2;
        printf("Suma: %i", suma);
    } else {
        if(operaciones=='-') {
            resta=num1-num2;
            printf("Resta: %i", resta);
        } else {
            if(operaciones=='*') {
                producto=num1*num2;
                printf("Multiplicacion: %i", producto);
            } else {
                if(operaciones=='/') {
                    division=num1/num2;
                    printf("Division: %i", division);
                }
            }
        }
    }

    getch();
    return 0;
}
