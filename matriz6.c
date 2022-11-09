#include<stdio.h>
#include<conio.h>

void cargar(int mat[2][5]){
    int f, c;
    for(f=0; f<2; f++) {
        for(c=0; c<5; c++) {
            printf("Ingrese un componente: ");
            scanf("%i", &mat[f][c]);
        }
    }
}

void imprimir(int mat[2][5]){
    int f, c;
    for(f=0; f<2; f++) {
        for(c=0; c<5; c++) {
            printf("%i ", mat[f][c]);
        }
    printf("\n");
    }
}

void intercambiar(int mat[2][5]){
    int aux;
    for(int c=0; c<5; c++) {
        aux = mat[0][c];
        mat[0][c] = mat[1][c];
        mat[1][c] = aux;
    }
}

int main() {
    int matriz[2][5];
    cargar(matriz);
    printf("Matriz: \n");
    imprimir(matriz);
    intercambiar(matriz);
    printf("Matriz Intercambiada: \n");
    imprimir(matriz);

    getch();
    return 0;
}
