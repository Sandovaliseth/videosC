#include<stdio.h>
#include<conio.h>

int main() {

    int f, valor, suma=0;

    for(f=1; f<=10; f++) {
        printf("Ingrese un valor: ");
        scanf("%i", &valor);

        if(f>5) {
            suma= suma+valor;
        }
    }

    printf("\nLa suma de los ultimos 5 valores es: %i", suma);

    getch();
    return 0;
}

