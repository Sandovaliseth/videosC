#include<stdio.h>
#include<conio.h>

#define TAMANO 5

void cargar(int *p){
    for(int f=0; f<TAMANO; f++) {
        printf("Ingrese un elemento: ");
        scanf("%i", &*p);
        p++;
    }
}

void imprimir(int *p) {
    for(int f=0; f<TAMANO; f++) {
        printf("%i - ", *p);
        p++;
    }
}

int main() {
    int vector[TAMANO];
    cargar(vector);
    imprimir(vector);

    getch();
    return 0;
}

