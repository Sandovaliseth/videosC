#include<stdio.h>
#include<conio.h>
#include<string.h>

#define TAMANO 4

struct libro{
    int codigo;
    char titulo[40];
    char autor[40];
};

void cargar(struct libro v[TAMANO]){
    for(int f=0; f<TAMANO; f++){
        printf("Ingrese el codigo del libro: ");
        scanf("%i", &v[f].codigo);
        fflush(stdin);
        printf("Ingrese el titulo: ");
        gets(v[f].titulo);
        printf("Ingrese el autor: ");
        gets(v[f].autor);
    }
}

void imprimir(struct libro libros[TAMANO]){
    printf("LISTADO DE LIBROS\n");
    for(int f=0; f<TAMANO; f++){
        printf("%i %s %s\n", libros[f].codigo, libros[f].titulo, libros[f].autor);
    }
}

void buscarAutor(struct libro v[TAMANO]){
    char autorB[40];
    printf("Ingrese el nombre del autor a buscar: ");
    gets(autorB);
    int cant=0;
    for(int f=0; f<TAMANO; f++){
        if(strcmp(autorB, v[f].autor)==0){
            printf("Titulo: %s\n", v[f].titulo);
            cant++;
        }
    }
    if(cant==0){
        printf("No tiene libros de su autoria");
    }
}

int main() {
    struct libro vector[TAMANO];
    cargar(vector);
    imprimir(vector);
    buscarAutor(vector);

    getch();
    return 0;
}

