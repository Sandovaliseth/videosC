#include<stdio.h>
#include<conio.h>

#define TAM 5

struct persona{
    char nombre[41];
    int edad;
};

typedef struct persona personas[TAM];

void cargar(personas p){
    for(int i=0; i<TAM; i++){
        printf("Ingrese el nombre de la persona:");
        gets(p[i].nombre);
        printf("Ingrese la edad de la persona:");
        scanf("%i",&p[i].edad);
        fflush(stdin);
    }
}

void imprimir(personas p){
    for(int i=0; i<TAM; i++){
        printf("%s %i\n", p[i].nombre, p[i].edad);
    }
}

int main(){
    personas p;
    cargar(p);
    imprimir(p);

    getch();
    return 0;
}

