#include<stdio.h>
#include<conio.h>

int main() {

    int vector[5];
    cargarVector(vector);
    mostrar(vector);

    getch();
    return 0;
}

void cargarVector(int vec[5]){
    for(int i=0; i<5; i++) {
        printf("Ingrese un elemento: ");
        scanf("%i", &vec[i]);
    }
}

void mostrar(int vec[5]){
    printf("Datos: \n");
    for(int j=0; j<5; j++) {
        printf("%i ", vec[j]);
    }
}

