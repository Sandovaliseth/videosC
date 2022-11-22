#include<conio.h>
#include<stdio.h>
#include "productos.h"

void registrar(venta *ventas){
    int id, dd, mm, aa;
    char nombre[41];
    printf("Ingrese el codigo de la venta: ");
    scanf("%i", &(*ventas).id);
    fflush(stdin);
    printf("Ingrese la fecha: ");
    printf("\nDia:");
    scanf("%i", &(*ventas).fechaRegistro.dd);
    printf("Mes:");
    scanf("%i", &(*ventas).fechaRegistro.mm);
    printf("Anio:");
    scanf("%i", &(*ventas).fechaRegistro.aa);
    fflush(stdin);
    printf("Ingrese el nombre del comprador: ");
    gets((*ventas).nombreC);
    printf("-----Registro exitoso-----\n");
}

void imprimirVentas(venta v){
    printf("----LISTADO VENTAS----\n");
    printf("Codigo: %i\n", v.id);
    printf("Fecha: %i/%i/%i\n", v.fechaRegistro.dd, v.fechaRegistro.mm, v.fechaRegistro.aa);
    printf("Comprador: %s\n", v.nombreC);
    printf("\n");
}

int inventario(){
    int opcion;
    producto prod1={1, "Carne", 9000, 10};
    producto prod2={2, "Leche", 5000, 15};
    producto prod3={3, "Arroz", 6000, 100};
    do {
        printf("------INVENTARIO------\n");
        printf("1. Crear producto\n");
        printf("2. Listar productos\n");
        printf("3. Regresar\n");
        printf("Escoge una opcion: ");
        scanf("%i", &opcion);
        switch(opcion){
            case 1:
                system("cls");
                break;
            case 2:
                system("cls");
                break;
            case 3:
                system("pause");
                system("cls");
                return main();
                break;
            default:
                printf("Opcion incorrecta ingrese una opcion valida\n");
        }
    } while(opcion!=3);

    getch();
    return 0;
}

/*void imprimirProductos(producto p){
    printf("----PRODUCTOS----\n");
    printf("Codigo: %i\n", v.id);
    printf("Fecha: %i/%i/%i\n", v.fechaRegistro.dd, v.fechaRegistro.mm, v.fechaRegistro.aa);
    printf("Comprador: %s\n", v.nombreC);
    printf("\n");
} */

/*productoNuevo(){
    for(int x=0; x<3;x++){
        int id, cantidad;
        char nombre[41];
        float precio;
        printf("Ingrese el codigo del producto: ");
        scanf("%i", &nuevoProd.id);
        fflush(stdin);
        printf("Ingrese el nombre del producto: ");
        gets(nuevoProd.nombre);
        printf("Ingrese el precio del producto: ");
        scanf("%f", &nuevoProd.precio);
        printf("Ingrese la cantidad disponible del producto: ");
        scanf("%f", &nuevoProd.precio);
        printf("-----Registro exitoso-----\n");
        return nuevoProd;
    }
} */
