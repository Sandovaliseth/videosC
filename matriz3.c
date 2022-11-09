#include<stdio.h>
#include<conio.h>

void cargar(int mat[3][4]){
    int f, c;
    for(f=0; f<3; f++) {
        for(c=0; c<4; c++) {
            printf("Ingrese componente: ");
            scanf("%i", &mat[f][c]);
        }
    }
}

void imprimir(int mat[3][4]){
    int f, c;
    for(f=0; f<3; f++) {
        for(c=0; c<4; c++) {
            printf("%i ", mat[f][c]);
        }
    printf("\n");
    }
}

void primerFila(int mat[3][4]){
    for(int c=0; c<4; c++) {
        printf("%i ", mat[0][c]);
    }
}

void ultimaFila(int mat[3][4]){
    for(int c=0; c<4; c++) {
        printf("%i ", mat[2][c]);
    }
}

void primeraColumna(int mat[3][4]){
    for(int f=0; f<3; f++) {
        printf("%i ", mat[f][0]);
    }
}

int main() {
    int matriz[3][4];
    cargar(matriz);
    printf("Matriz: \n");
    imprimir(matriz);
    printf("\nPrimera fila: \n");
    primerFila(matriz);
    printf("\nUltima fila: \n");
    ultimaFila(matriz);
    printf("\nPrimera columna: \n");
    primeraColumna(matriz);

    getch();
    return 0;
}
