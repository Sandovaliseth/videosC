#include<conio.h>
#include<stdio.h>

#define tamano 5

void cargar(int vec[tamano]){
    for(int i=0; i<tamano; i++){
        printf("Ingrese un elemento: ");
        scanf("%i", &vec[i]);
    }
}

void imprimir (const int vec[tamano]){
    for(int i=0; i<tamano; i++){
        printf("%i ", vec[f]);
    }
}

int main() {
    int vector[tamano];
    cargar(vector);
    imprimir(vector);

    getch();
    return 0;
}

