#include<stdio.h>
#include<conio.h>

void cargar(char productos[5][41], float precios[5]){
    for(int f=0; f<5; f++) {
        printf("Ingrese el nombre del producto:");
        gets(productos[f]);
        printf("Ingrese el precio del producto:");
        scanf("%f", &precios[f]);
        fflush(stdin);
    }
}

void imprimir(char productos[5][41], float precios[5]){
    printf("Lista de productos\n");
    for(int f=0; f<5; f++) {
        printf("Producto: %s - Precio: %0.2f \n", productos[f], precios[f]);
    }
}

void mayores(float precios[5]){
    int cont=0;
    for(int f=0; f<5; f++) {
        if(precios[f]>precios[0]){
                cont++;
        }
    }
    printf("Los productos con precio mayor al primer producto son: %i", cont);
}

int main() {
    char productos[5][41];
    float precios[5];
    cargar(productos, precios);
    imprimir(productos, precios);
    mayores(precios);

    getch();
    return 0;
}
