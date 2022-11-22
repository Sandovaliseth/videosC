#include<conio.h>
#include<stdio.h>
#include "productos.h"

void registrar(venta *ventas){
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
    producto nuevo;
    producto lista;
    producto lista1[0]={1, "Carne", 9000, 50};
    producto lista2[1]={2, "Leche", 5000, 15};
    producto lista3[2]={3, "Arroz", 6000, 100};
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
                registrarProducto(&nuevo);
                break;
            case 2:
                system("cls");
                productosLista(nuevo);
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

void registrarProducto(producto *nuevo){
    printf("Ingrese los datos del producto\n");
    printf("Codigo: ");
    scanf("%i", &(*nuevo).id);
    fflush(stdin);
    printf("Nombre: ");
    gets((*nuevo).nombre);
    printf("Precio:");
    scanf("%f", &(*nuevo).precio);
    fflush(stdin);
    printf("Cantidad: ");
    scanf("%i", &(*nuevo).cantidad);
    printf("-----Registro exitoso-----\n");
}

void productosLista(producto p){
    printf("----Inventario Productos----\n");
    printf("Codigo: %i\n", p.id);
    printf("Nombre: %s\n", p.nombre);
    printf("Precio: %0.2f\n", p.precio);
    printf("Cantidad: %i\n", p.cantidad);
    printf("\n");
}
