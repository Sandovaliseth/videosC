#include<stdio.h>
#include<conio.h>

#define TAMANO 5

void cargar(int cont, int *p){
    for(int f=0; f<cont; f++) {
        printf("Ingrese un elemento: ");
        scanf("%i", &*p);
        p++;
    }
    cont++;
}

void imprimir(int cont, int *p) {
    for(int f=0; f<cont; f++) {
        printf("%i - ", *p);
        p++;
    }
}

int main() {
    int cont=1;
    int vector[cont];
    cargar(cont, vector);
    imprimir(cont, vector);

    getch();
    return 0;
}
