#include<stdio.h>
#include<conio.h>

void cargar(int mat[4][4]){
    int f, c;
    for(f=0; f<4; f++) {
        for(c=0; c<4; c++) {
            printf("Ingrese componente: ");
            scanf("%i", &mat[f][c]);
        }
    }
}

void imprimir(int mat[4][4]){
    for(int f=0; f<4; f++) {
        for(int c=0; c<4; c++) {
            printf("%i ", mat[f][c]);
        }
        printf("\n");
    }
}

void imprimirDiagonal(int mat[4][4]){
   /*printf("%i ", mat[0][0]);
   printf("%i ", mat[1][1]);
   printf("%i ", mat[2][2]);
   printf("%i ", mat[3][3]);

   otra forma
    for(int f=0; f<4; f++) {
        for(int c=0; c<4; c++) {
            if(f==c){
                printf("%i ", mat[f][c]);
            }
        }
    }
    como son 4*4
    */
    for(int f=0; f<4; f++) {
        printf("%i ", mat[f][f]);
    }
}

int main() {
    int matriz[4][4];
    cargar(matriz);
    printf("Matriz: \n");
    imprimir(matriz);
    printf("\nMatriz diagonal: \n");
    imprimirDiagonal(matriz);

    getch();
    return 0;
}
