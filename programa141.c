#include<stdio.h>
#include<conio.h>
#include<string.h>

#define TAMANO 3

struct fecha{
    int dd;
    int mm;
    int aa;
};

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechaVencimiento;
};

void cargar(struct producto v[TAMANO]){
    for(int f=0; f<TAMANO; f++){
        printf("Ingrese el codigo del producto: ");
        scanf("%i", &v[f].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion del producto: ");
        gets(v[f].descripcion);
        printf("Ingrese el precio del producto: ");
        scanf("%f", &v[f].precio);
        printf("Ingrese la fecha de vencimiento: ");
        printf("\nDia:");
        scanf("%i", &v[f].fechaVencimiento.dd);
        printf("Mes:");
        scanf("%i", &v[f].fechaVencimiento.mm);
        printf("Anio:");
        scanf("%i", &v[f].fechaVencimiento.aa);
    }
}

void imprimir(struct producto v[TAMANO]){
    printf("LISTADO DE PRODUCTOS\n");
    for(int f=0; f<TAMANO; f++){
        printf("%i %s %0.2f %i/%i/%i\n", v[f].codigo, v[f].descripcion, v[f].precio, v[f].fechaVencimiento.dd, v[f].fechaVencimiento.mm, v[f].fechaVencimiento.aa);
    }
}

int main() {
    struct producto vector[TAMANO];
    cargar(vector);
    imprimir(vector);

    getch();
    return 0;
}
