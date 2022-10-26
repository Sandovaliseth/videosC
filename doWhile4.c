#include<stdio.h>
#include<conio.h>

int main() {

    int valor, suma=0;

    do{
        printf("Ingrese el peso de la pieza: ");
        scanf("%i", &valor);

        if(valor!=9999) {
          suma = suma+valor;
        }

    } while(valor!=9999);

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
