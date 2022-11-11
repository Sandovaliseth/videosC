#include<stdio.h>
#include<conio.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

struct producto cargar(){
    struct producto p;
    printf("Ingrese el codigo del producto: ");
    scanf("%i", &p.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion o el nombre: ");
    gets(p.descripcion);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &p.precio);
    return p;
}

void imprimir(struct producto p){
    printf("DATOS: \n");
    printf("Codigo del producto: %i\n", p.codigo);
    printf("Descripcion del producto: %s\n", p.descripcion);
    printf("Precio del producto: %0.2f\n", p.precio);
}

int main() {
    struct producto prod1, prod2;
    prod1= cargar();
    prod2= cargar();
    imprimir(prod1);
    imprimir(prod2);

    getch();
    return 0;
}
