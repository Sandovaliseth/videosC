#include<stdio.h>
#include<conio.h>

int main() {

    int numeroC;
    float saldoA, suma=0;

    do{
        printf("\nIngrese el numero de cuenta (valor negativo para finalizar): ");
        scanf("%i", &numeroC);

         if(numeroC>=0) {
                printf("Ingrese un saldo: ");
                scanf("%f", &saldoA);

                if(saldoA>0) {
                printf("\nEl estado de la cuenta es saldo Acreedor");
                suma=suma+saldoA;
                } else {
                if(saldoA<0) {
                    printf("\nEl estado de la cuenta es saldo Deudor");
                    } else {
                        printf("\nEl estado de la cuenta es saldo Nulo");
                    }
                }
             }

    } while(numeroC>=0);

    printf("\nTotal de saldo acreedores: %f", suma);

    getch();
    return 0;
}
