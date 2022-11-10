#include<stdio.h>
#include<conio.h>

#define FILA 4
#define COLUMNA 3

void cargar(char nombre[FILA][41], float sueldos[FILA][COLUMNA]){
    for(int f=0; f<FILA; f++) {
            printf("Ingrese el nombre del empleado %i:", f);
            gets(nombre[f]);
        for(int c=0; c<COLUMNA; c++) {
            printf("Ingrese el sueldo del mes:");
            scanf("%f", &sueldos[f]);
        }
    }
}

void imprimir(char nombre[FILA], float sueldos[FILA][COLUMNA]){
    float sueldosTot[FILA];;
    for(int f=0; f<FILA; f++) {
        for(int c=0; c<COLUMNA; c++) {
            sueldosTo=sueldosTo+sueldos[c];
            printf("\nAl empleado %s se le pago un total de %0.2f\n", nombre[f], sueldosTot[f]);
        }
    }
}

int main() {
    char nombres[FILA][41];
    float sueldos[FILA][COLUMNA];
    cargar(nombres,sueldos);

    getch();
    return 0;
}

