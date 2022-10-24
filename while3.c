#include<stdio.h>
#include<conio.h>

int main() {
    int suma, x, promedio, valor;

    x=1;
    suma= 0;

    while(x<=10) {
         printf("Ingrese un valor: ");
         scanf("%i", &valor);
         suma = suma + valor;
         x=x+1;
    }

    promedio = suma/10;
    printf("Suma: %i ", suma);
    printf("\nPromedio: %i", promedio);

    getch();
    return 0;
}
