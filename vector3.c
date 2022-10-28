#include<stdio.h>
#include<conio.h>

int main() {

    int f, elementos[8], suma=0, mayor36=0, cant=0;

    for(f=0; f<8; f++) {
        printf("Ingrese elementos: ");
        scanf("%i", &elementos[f]);
    }

    for(f=0; f<8; f++) {
        suma= suma+elementos[f];
    }

    for(f=0; f<8; f++) {
        if(elementos[f]>36) {
            mayor36=mayor36+elementos[f];
        } if(elementos[f]>50) {
            cant++;
        }
    }

    printf("\nLa suma de los 8 elementos es: %i", suma);
    printf("\nEl acumulado de los elementos mayores a 36 es: %i", mayor36);
    printf("\nLos valores mayores a 50 son: %i", cant);

    getch();
    return 0;
}
