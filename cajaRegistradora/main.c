#include<conio.h>
#include<stdio.h>
#include "productos.h"

int main(){
    int opcion;
    int cont=0;
    venta listado[cont];
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
                listado[cont]=registrar();
                cont++;
                break;
            case 2:
                system("cls");
                inventario();
                break;
            case 3:
                system("cls");
                imprimirVentas(cont, listado);
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
