#include<stdio.h>
#include<conio.h>

int main() {

    int aprobados=0, reprobados=0, f, nota;

    for(f=1; f<=10; f++) {
        printf("Ingrese las notas: ");
        scanf("%i", &nota);
        if(nota>=7) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    printf("\nCantidad de alumnos aprobados: %i", aprobados);
    printf("\nCantidad de alumnos reprobados: %i", reprobados);


    getch();
    return 0;
}
