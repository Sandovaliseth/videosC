#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombre[5][41], int habitantes[5]){
    for(int f=0; f<5; f++) {
        printf("Ingrese el nombre del pais:");
        gets(nombre[f]);
        printf("Ingrese la cantidad de habitantes:");
        scanf("%i", &habitantes[f]);
        fflush(stdin);
    }
}

void ordenarAlfabeticamente(char paises[5][41], int habitantes[5]){
    char auxPais[41];
    int aux;

    for(int k=0; k<4; k++){
        for(int f=0; f<4-k; f++) {
            if(strcmp(paises[f], paises[f+1])>0){
                strcpy(auxPais, paises[f]);
                strcpy(paises[f], paises[f+1]);
                strcpy(paises[f+1], auxPais);
                aux=habitantes[f];
                habitantes[f]=habitantes[f+1];
                habitantes[f+1]=aux;
            }
        }
    }
}

void imprimir(char paises[5][41], int habitantes[5]){
    printf("Lista\n");
    for(int f=0; f<5; f++) {
        printf("%s - %i\n", paises[f], habitantes[f]);
    }
}

void ordenarMayorMenor(char nombre[5][41], int habitantes[5]){
    char auxPais[41];
    int aux;

    for(int k=0; k<4; k++){
        for(int f=0; f<4-k; f++) {
            if(habitantes[f]<habitantes[f+1]){
                aux=habitantes[f];
                habitantes[f]=habitantes[f+1];
                habitantes[f+1]=aux;
                strcpy(auxPais, nombre[f]);
                strcpy(nombre[f], nombre[f+1]);
                strcpy(nombre[f+1], auxPais);
            }
        }
    }
}

int main() {
    char nombrePais[5][41];
    int habitantes[5];
    cargar(nombrePais, habitantes);
    ordenarAlfabeticamente(nombrePais, habitantes);
    imprimir(nombrePais, habitantes);
    ordenarMayorMenor(nombrePais, habitantes);
    imprimir(nombrePais, habitantes);

    getch();
    return 0;
}
