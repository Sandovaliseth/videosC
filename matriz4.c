#include<stdio.h>
#include<conio.h>

void cargar(int mat[2][5]){
    int f, c;
    for(c=0; c<5; c++) {
        for(f=0; f<2; f++) {
            printf("Ingrese los componente de la columna %i: ", c);
            scanf("%i", &mat[f][c]);
        }
    }
}

void imprimir(int mat[2][5]){
    for(int f=0; f<2; f++) {
        for(int c=0; c<5; c++) {
            printf("%i ", mat[f][c]);
        }
    printf("\n");
    }
}

int main() {
    int matriz[2][5];
    cargar(matriz);
    printf("Matriz: \n");
    imprimir(matriz);

    getch();
    return 0;
}
