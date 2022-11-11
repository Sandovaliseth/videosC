#include<stdio.h>
#include<conio.h>
#include<string.h>

#define FILA 4
#define COLUMNA 3

void cargar(char nombre[FILA][41], float sueldos[FILA][COLUMNA]){
    for(int f=0; f<FILA; f++) {
        printf("Ingrese el nombre del empleado %i: ", f+1);
        gets(nombre[f]);
        for(int c=0; c<COLUMNA; c++) {
            printf("Ingrese el sueldo del mes: ");
            scanf("%f", &sueldos[f]);
            fflush(stdin);
        }
    }
}

void sumaSueldos(float sueldos[FILA][COLUMNA], float sueldosTot[FILA]){
    for(int f=0; f<FILA; f++) {
        int suma=0;
        for(int c=0; c<COLUMNA; c++) {
            suma=suma+sueldos[f][c];
        }
    sueldosTot[f]=suma;
    }
}

void imprimir(char nombre[FILA][41], float sueldosTot[FILA]){
    printf("\nTotal en sueldos en los ultimos 3 meses\n");
    for(int f=0; f<FILA; f++) {
        printf("Al empleado %s se le pago un total de %0.2f\n", nombre[f], sueldosTot[f]);
    }
}

void mayorSueldo(char nombre[FILA][41], float sueldosTot[FILA]){
    float may=sueldosTot[0];
    char nom[41];
    strcpy(nom, nombre[0]);
    for(int f=1; f<FILA; f++) {
        if(sueldosTot[f]>may){
            may=sueldosTot[f];
            strcpy(nom, nombre[f]);
        }
    }
    printf("\nEl empleado con mayor sueldo es %s y su acumulado es de %0.2f", nom, may);
}

int main() {
    char nombres[FILA][41];
    float sueldos[FILA][COLUMNA];
    float sueldosTot[FILA];
    cargar(nombres,sueldos);
    sumaSueldos(sueldos, sueldosTot);
    imprimir(nombres, sueldosTot);
    mayorSueldo(nombres, sueldosTot);

    getch();
    return 0;
}

