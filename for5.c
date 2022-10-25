#include<stdio.h>
#include<conio.h>

int main() {

    int cantidad=0, n, f, valor;

    printf("Ingrese la cantidad de numeros a evaluar: ");
    scanf("%i", &n);

    for(f=1; f<=n; f++) {
        printf("Ingrese un valor: ");
        scanf("%i", &valor);
        if(valor>=1000) {
            cantidad++;
        }
    }

    printf("\nCantidad de valores mayores o iguales a 1000: %i", cantidad);


    getch();
    return 0;
}
