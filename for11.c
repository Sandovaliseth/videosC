#include<stdio.h>
#include<conio.h>

int main() {

    int n, f, x, y, cuadranteI=0, cuadranteII=0, cuadranteIII=0, cuadranteIV=0;

    printf("Ingrese el valor de n o la cantidad de puntos a evaluar: ");
    scanf("%i", &n);
;
    for(f=1; f<=n; f++) {
        printf("\nIngrese la coordenada en X: ");
        scanf("%i", &x);
        printf("Ingrese la coordenada en Y: ");
        scanf("%i", &y);
        if(x>0 && y>0) {
            cuadranteI++;
        } else {
            if(x<0 && y>0) {
                cuadranteII++;
            } else {
                if(x<0 && y<0) {
                    cuadranteIII++;
                } else {
                    if(x>0 && y<0) {
                        cuadranteIV++;
                    }
                    }
                }
            }
    }

    printf("\nLa cantidad de puntos en el primer cuadrante es: %i", cuadranteI);
    printf("\nLa cantidad de puntos en el segundo cuadrante es: %i", cuadranteII);
    printf("\nLa cantidad de puntos en el tercer cuadrante es: %i", cuadranteIII);
    printf("\nLa cantidad de puntos en el cuarto cuadrante es: %i", cuadranteIV);

    getch();
    return 0;
}
