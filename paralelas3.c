#include<stdio.h>
#include<conio.h>

void cargar(char nombre[4][41], int nota[4]){
    for(int f=0; f<4; f++) {
        printf("Ingrese el nombre del alumno:");
        gets(nombre[f]);
        printf("Ingrese una nota:");
        scanf("%i", &nota[f]);
        fflush(stdin);
    }
}

void condicionAlumno(char nombre[4][41], int nota[4]){
    for(int f=0; f<4; f++) {
        printf("El alumno %s tiene una nota de %i para una calificacion de: ", nombre[f], nota[f]);
        if(nota[f]>=8){
          printf("Muy bueno\n");
        } else {
            if(nota[f]>4){
                printf("Bueno\n");
            } else{
                printf("Insuficiente\n");
            }
        }
    }
}

void imprimir(int nota[4]){
    int cont=0;
    for(int f=0; f<4; f++) {
        if(nota[f]>=8){
                cont++;
        }
    }
    printf("La cantidad de alumnos con calificaciones muy buenas son: %i", cont);
}

int main() {
    char nombre[4][41];
    int nota[4];
    cargar(nombre, nota);
    condicionAlumno(nombre, nota);
    imprimir(nota);

    getch();
    return 0;
}
