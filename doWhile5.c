#include<stdio.h>
#include<conio.h>

int main() {

    int numeroC;
    float saldoA, suma=0;

    do{
        printf("Ingrese el numero de cuenta (valor negativo para finalizar): ");
        scanf("%i", &numeroC);

        if(numeroC>=0) {
            printf("Ingrese saldo: ");
            scanf("%i", &numeroC);
        }

    } while(numeroC<0);

    printf("\nEl valor acumulado o la suma es: %i", suma);

    if(suma==0) {
        printf("\nEl valor acumulado es cero");
    } else {
        if(suma>0) {
            printf("\nEl valor acumulado es positivo");
        } else {
            printf("\nEl valor acumulado es negativo");
        }
    }

    getch();
    return 0;
}
