#include<stdio.h>
#include<conio.h>

int main() {

    int f, grupoA[5], grupoB[5], sumaA=0, sumaB=0, promedioA, promedioB;

    for(f=0; f<5; f++) {
        printf("Ingrese las notas del primer curso: ");
        scanf("%i", &grupoA[f]);
        sumaA=sumaA+grupoA[f];
    }

    printf("\n");
    for(f=0; f<5; f++) {
        printf("Ingrese las notas del segundo curso: ");
        scanf("%i", &grupoB[f]);
        sumaB=sumaB+grupoB[f];
    }

    promedioA=sumaA/5;
    promedioB=sumaB/5;

    printf("\nPromedio del curso A: %i", promedioA);
    printf("\nPromedio del curso B: %i", promedioB);

    if(promedioA==promedioB) {
        printf("\nAmbos cursos tiene el mismo promedio");
    } else {
        if(promedioA>promedioB) {
            printf("\nEl curso con mayor promedio es el curso A");
        } else {
            printf("\nEl curso con mayor promedio es el curso B");
        }
    }


    getch();
    return 0;
}

