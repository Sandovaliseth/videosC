#include<conio.h>
#include<stdio.h>
#include "productos.h"

int main(){
    int opcion;
    printf("------Menu Principal------\n");
    printf("1. Registrar venta\n");
    printf("2. Inventario\n");
    printf("3. Listar ventas\n");
    printf("4. Salir\n");
    printf("Por favor ingrese una opcion: ");
    scanf("%i", opcion);
    switch(opcion){
        case 1:
            registrar();
        break;
    }
}
