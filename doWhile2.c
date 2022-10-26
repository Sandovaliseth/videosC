#include<stdio.h>
#include<conio.h>

int main() {

    int suma=0, count=0, valor, promedio;

    do{
        printf("Ingrese un valor (0 finaliza): ");
        scanf("%i", &valor);

        if(valor!=0) {
            suma=suma+valor;
            count++;
        }

    } while(valor!=0);

    if(count!=0) {
        promedio = suma/count;
        printf("El promedio de los valores ingresados es ");
        printf("%i", promedio);
    } else {
        printf("No se ha ingresado valores");
    }

    getch();
    return 0;
}
