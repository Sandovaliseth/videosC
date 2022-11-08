#include<stdio.h>
#include<conio.h>

void cargar(int mat[3][5]){
    int f, c;
    for(f=0; f<3; f++) {
        for(c=0; c<5; c++) {
            printf("Ingrese componente: ");
            scanf("%i", &mat[f][c]);
        }
    }
}

void imprimir(int mat[3][5]){
    for(int f=0; f<3; f++) {
        for(int c=0; c<5; c++) {
            printf("%i ", mat[f][c]);
        }
    }
}

int main() {
    int matriz[3][5];
    cargar(matriz);
     printf("MATRIZ: \n");
    imprimir(matriz);

    getch();
    return 0;
}
