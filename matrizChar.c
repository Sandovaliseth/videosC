#include<stdio.h>
#include<conio.h>

void cargar(char articulos[3][31]){
    int f, c;
    for(f=0; f<3; f++) {
        printf("Ingrese el aticulo: ");
        gets(articulos[f]);
    }
}

void imprimir(char articulos[3][31]){
    for(int f=0; f<3; f++) {
        printf("%s\n", articulos[f]);
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
    char articulos[3][31];
    cargar(articulos);
    imprimir(articulos);

    getch();
    return 0;
}
