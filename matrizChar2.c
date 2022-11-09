#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombres[5][41]){
    for(int f=0; f<5; f++) {
        printf("Ingrese el nombre de la persona: ");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41]){
    printf("Listado nombres: \n");
    for(int f=0; f<5; f++) {
        printf("%s\n", nombres[f]);
    }
}

void consultar(char nombres[5][41]){
    char nom[41];
    int existe=0;
    printf("Ingrese el nombre a buscar: ");
    gets(nom);

    for(int f=0; f<5; f++) {
        if(strcmp(nom, nombres[f])==0){
            existe=1;
        }
    }

    if(existe==1){
        printf("El nombre SI se encuentra almacenado en la matriz");
    } else{
        printf("El nombre NO se encuentra almacenado en la matriz");
    }
}

int main() {
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    consultar(nombres);

    getch();
    return 0;
}
