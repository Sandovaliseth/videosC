#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include "productos.h"

#define tam 100

int main(){
    int opcion, cont=0;
    venta *dato;
    venta vec[tam];
    dato=vec;
    do {
        printf("------Menu Principal------\n");
        printf("1. Registrar venta\n");
        printf("2. Inventario\n");
        printf("3. Listar ventas\n");
        printf("4. Salir\n");
        printf("Por favor ingrese una opcion: ");
        scanf("%i", &opcion);
        switch(opcion){
            case 1:
                system("cls");
                registrar(vec);
                cont++;
                break;
            case 2:
                system("cls");
                inventario();
                break;
            case 3:
                system("cls");
                imprimirVentas(cont, dato);
                break;
            case 4:
                printf("------FIN PROGRAMA------\n");
                exit(0);
                break;
            default:
                printf("Opcion incorrecta ingrese una opcion valida\n");
        }
    } while(opcion!=4);

    getch();
    return 0;
}
