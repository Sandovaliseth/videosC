#include<conio.h>
#include<stdio.h>

#define tamano 5

void cargar(int vec[tamano]){
    for(int i=0; i<tamano; i++){
        printf("Ingrese un elemento: ");
        scanf("%i", &vec[i]);
    }
}

int suma(int vec[tamano]){
    int suma=0;
    for(int i=0; i<tamano; i++){
        suma+=vec[i];
    }
    return suma;
}

int producto(int vec[tamano]){
    int prod=1;
    for(int i=0; i<tamano; i++){
        prod*=vec[i];
    }
    return prod;
}

int main() {
    int vector[tamano];
    cargar(vector);
    printf("La suma de los elementos en el vector es de: %i\n", suma(vector));
    printf("La multiplicacion de los elementos en el vector es de: %i", producto(vector));

    getch();
    return 0;
}
