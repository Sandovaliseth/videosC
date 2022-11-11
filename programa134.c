#include<stdio.h>
#include<conio.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

void imprimir(struct producto prod){
    printf("Codigo del producto: %i\n", prod.codigo);
    printf("Descripcion del producto: %s\n", prod.descripcion);
    printf("Precio del producto: %0.2f\n", prod.precio);
}

int main() {
    struct producto prod;
    prod.codigo=1;
    strcpy(prod.descripcion, "naranjas");
    prod.precio=15.50;
    imprimir(prod);

    getch();
    return 0;
}
