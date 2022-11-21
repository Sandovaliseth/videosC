#include<conio.h>
#include<stdio.h>
#include "productos.h"

venta registrar(){
    venta ventas;
    int id, dd, mm, aa;
    char nombre[41];
    printf("Ingrese el codigo de la venta: ");
    scanf("%i", &ventas.id);
    fflush(stdin);
    printf("Ingrese la fecha: ");
    printf("\nDia:");
    scanf("%i", &ventas.fechaRegistro.dd);
    printf("Mes:");
    scanf("%i", &ventas.fechaRegistro.mm);
    printf("Anio:");
    scanf("%i", &ventas.fechaRegistro.aa);
    fflush(stdin);
    printf("Ingrese el nombre del comprador: ");
    gets(ventas.nombreC);
    printf("-----Registro exitoso-----\n");
    return ventas;
}

void imprimirVentas(int cont, venta v[cont]){
    printf("----LISTADO VENTAS----\n");
    for(int i=0; i<cont; i++){
        printf("Codigo: %i\n", v[i].id);
        printf("Fecha: %i/%i/%i\n", v[i].fechaRegistro.dd, v[i].fechaRegistro.mm, v[i].fechaRegistro.aa);
        printf("Comprador: %s\n", v[i].nombreC);
        printf("\n");
    }
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
                system("cls");
                main();
                exit(0);
                break;
            default:
                printf("Opcion incorrecta ingrese una opcion valida\n");
        }
    } while(opcion!=3);

    getch();
    return 0;
}

producto nuevo(int t, producto prod[t]){
    producto nuevoProd;
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

