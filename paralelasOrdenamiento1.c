#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombre[5][41], int nota[5]){
    for(int f=0; f<5; f++) {
        printf("Ingrese el nombre del alumno:");
        gets(nombre[f]);
        printf("Ingrese una nota:");
        scanf("%i", &nota[f]);
        fflush(stdin);
    }
}

void ordenar(char nombre[5][41], int notas[5]){
    char auxNom[41];
    int auxNota;

    for(int k=0; k<4; k++){
        for(int f=0; f<4-k; f++) {
            if(notas[f]<notas[f+1]){
                auxNota=notas[f];
                notas[f]=notas[f+1];
                notas[f+1]=auxNota;
                strcpy(auxNom, nombre[f]);
                strcpy(nombre[f], nombre[f+1]);
                strcpy(nombre[f+1], auxNom);
            }
        }
    }
}

void imprimir(char nombre[5][41], int nota[5]){
    printf("Lista ordenada de los alumnos de mayor a menor\n");
    for(int f=0; f<5; f++) {
        printf("%s - %i\n", nombre[f], nota[f]);
    }
}

int main() {
    char nombre[5][41];
    int nota[5];
    cargar(nombre, nota);
    ordenar(nombre, nota);
    imprimir(nombre, nota);

    getch();
    return 0;
}
