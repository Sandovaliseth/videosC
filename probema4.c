#include<stdio.h>
#include<conio.h>

int main() {
    float precioArticulo, totalPrecio;
    int cantidad;
    printf("Ingrese el precio del articulo:");
    scanf("%f", &precioArticulo);
    printf("Ingrese ela cantidad:");
    scanf("%i", &cantidad);
    totalPrecio=precioArticulo*cantidad;
    printf("El valor a pagar es de:");
    printf("%f", totalPrecio);
    getch();
    return 0;
}
