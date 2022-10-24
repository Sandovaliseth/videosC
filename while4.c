#include<stdio.h>
#include<conio.h>

int main() {
    int cantidad, x, n;
    float largo;
    x=1;
    cantidad= 0;

    printf("Ingrese el valor de las piezas a procesar: ");
    scanf("%i", &n);

    while(x<=n) {
         printf("Ingrese la medida de la pieza: ");
         scanf("%f", &largo);
         if(largo>=1.20 && largo<=1.30) {
            cantidad = cantidad + 1;
         }
         x = x+1;
    }

    printf("La cantidad de piezas son: %i", cantidad);

    getch();
    return 0;
}
