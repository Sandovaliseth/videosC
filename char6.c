#include<stdio.h>
#include<conio.h>

int main() {

    int valor, suma=0;
    char continua;

    do {
        printf("Ingrese un valor:  ");
        scanf("%i", &valor);
        suma=suma+valor;
        printf("Desea cargar otro valor [s/n]: ");
        scanf(" %c", &continua);
    } while(continua=='s' || continua=='S');

    printf("La suma de todos los valores ingresados %i", suma);

    getch();
    return 0;
}
