#include<stdio.h>
#include<conio.h>

void cargar(int mat[3][4]){
    int f, c;
    for(f=0; f<3; f++) {
        for(c=0; c<4; c++) {
            printf("Ingrese un componente: ");
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

void mayor(int mat[3][4]){
    int mayor=mat[0][0];
    for(int f=0; f<3; f++) {
        for(int c=0; c<4; c++) {
            if(mat[f][c]>mayor){
                mayor=mat[f][c];
            }
        }
    }
    printf("\nEl elemento mayor de la matriz es: %i", mayor);
}

int main() {
    int matriz[3][4];
    cargar(matriz);
    printf("Matriz: \n");
    imprimir(matriz);
    mayor(matriz);

    getch();
    return 0;
}
