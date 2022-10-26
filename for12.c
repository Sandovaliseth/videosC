#include<stdio.h>
#include<conio.h>

int main() {

    int f, num, negativos=0, positivos=0, multiplos15=0, pares=0;

    for(f=1; f<=10; f++) {
        printf("Ingrese un valor: ");
        scanf("%i", &num);

        if(num>0) {
            positivos++;
        } else {
            if(num<0) {
            negativos++;
            }
        } if(num%15==0) {
            multiplos15++;
        } if(num%2==0) {
            pares=pares+num;
        }
    }

    printf("\nCantidad de valores negativos: %i", negativos);
    printf("\nCantidad de valores positivos: %i", positivos);
    printf("\nLa cantidad de multiplos de 15 son: %i", multiplos15);
    printf("\nLa suma o el acumulado de los numeros pares: %i", pares);

    getch();
    return 0;
}
