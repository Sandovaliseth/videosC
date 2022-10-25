#include<stdio.h>
#include<conio.h>

int main() {

    int suma=0, f, promedio, valor;

    for(f=1; f<=10; f++) {
        printf("Ingrese un valor: ");
        scanf("%i", &valor);
        suma=suma+valor;
    }

    promedio=suma/10;
    printf("\nSuma: %i", suma);
    printf("\nPromedio: %i", promedio);


    getch();
    return 0;
}
