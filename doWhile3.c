#include<stdio.h>
#include<conio.h>

int main() {

    int cant1=0, cant2=0, cant3=0, suma;
    float peso;

    do{
        printf("Ingrese el peso de la pieza: ");
        scanf("%f", &peso);

        if(peso>10.2) {
            cant1++;
        } else {
            if(peso>=9.2) {
                cant2++;
            } else {
                if(peso>0) {
                    cant3++;
                }
            }
        }

    } while(peso!=0);

    suma= cant1+cant2+cant3;
    printf("\nCantidad de piezas con un peso mayor de 10.2 kg: %i", cant1);
    printf("\nCantidad de piezas con un peso entre 9.8 y 10.2: %i", cant2);
    printf("\nCantidad de piezas con un peso menor de 9.8: %i", cant3);
    printf("\nLa cantidad de piezas procesadas son: %i", suma);

    getch();
    return 0;
}
