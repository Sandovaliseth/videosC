#include<stdio.h>
#include<conio.h>

int main() {
    int x, lista1=0, lista2=0, valor;

    x=1;
    while(x<=15) {
        printf("Ingrese los valores de la primera lista: ");
        scanf("%i", &valor);
        lista1=lista1+valor;
        x=x+1;
    }

    printf("\n");

    x=1;
    while(x<=15) {
        printf("Ingrese los valores de la segunda lista: ");
        scanf("%i", &valor);
        lista2=lista2+valor;
        x=x+1;
    }

    if(lista1>lista2) {
        printf("\nLista 1 mayor");
    } else {
        if(lista2>lista1) {
            printf("\nLista 2 mayor");
        } else {
            printf("\nListas iguales");
        }
    }

    getch();
    return 0;
}

