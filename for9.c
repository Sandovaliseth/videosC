#include<stdio.h>
#include<conio.h>

int main() {

    int numero, f, tablaM=0;

    printf("Ingrese un valor del 1 al 10: ");
    scanf("%i", &numero);

    printf("La tabla de multiplicar es: \n");
    for(f=1; f<=13; f++) {
        tablaM=f*numero;
        printf("%i - ", tablaM);
    }

    getch();
    return 0;
}
