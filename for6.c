#include<stdio.h>
#include<conio.h>

int main() {

    int n, f, base, altura, superficie, cantidadT=0;

    printf("Ingrese la cantidad de datos: ");
    scanf("%i", &n);

    for(f=1; f<=n; f++) {
        printf("\nIngrese la base del triangulo: ");
        scanf("%i", &base);
        printf("Ingrese la altura del triangulo: ");
        scanf("%i", &altura);
        superficie=base*altura/2;
        printf("\nBase: %i", base);
        printf("\nAltura: %i", altura);
        printf("\nSuperficie: %i", superficie);
        if(superficie>12) {
            cantidadT++;
        }
    }

    printf("\nCantidad de triangulos con una superficie mayor a 12: %i", cantidadT);

    getch();
    return 0;
}
