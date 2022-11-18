#include<conio.h>
#include<stdio.h>

int main() {
    int valor;
    printf("Ingrese un valor entre 1 y 5: ");
    scanf("%i", &valor);

    switch(valor){
        case 1:
            printf("Uno");
            break;
        case 2:
            printf("Uno");
            break;
        case 3:
            printf("Uno");
            break;
        case 4:
            printf("Uno");
            break;
        case 5:
            printf("Uno");
            break;
        default:
            printf("El valor no se encuentra dentro del rango");
            break;
    }

    printf("Resultado: %i\n", result);

    getch();
    return 0;
}
