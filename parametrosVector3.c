#include<stdio.h>
#include<conio.h>

int main() {

    int vec1[5];
    int vec2[5];
    int vec3[5];
    cargarVector(vec1);
    cargarVector(vec2);
    sumar(vec1, vec2, vec3);
    imprimir(vec1);
    imprimir(vec2);
    imprimir(vec3);

    getch();
    return 0;
}

void cargarVector(int vec[5]){
    printf("Llenar vector \n");
    for(int i=0; i<5; i++) {
        printf("Ingrese un elemento: ");
        scanf("%i", &vec[i]);
    }
}

void sumar(int v1[5], int v2[5], int v3[5]){
    for(int i=0; i<5; i++) {
        v3[i] = v1[i]+v2[i];
    }
}

void imprimir(int vec[5]){
    printf("\nDatos del vector: \n");
    for(int i=0; i<5; i++) {
        printf("%i - ", vec[i]);
    }
}
