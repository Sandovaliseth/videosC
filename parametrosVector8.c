#include<stdio.h>
#include<conio.h>

void cargar(int cursos[5]){
    for(int x=0; x<5; x++) {
        printf("Ingrese una nota: ");
        scanf("%i", &cursos[x]);
    }
}

int promedio (int cursos[5]){
    int suma=0, promedio;
    for(int x=0; x<5; x++) {
       suma=suma+cursos[x];
    }

    promedio=suma/5;
    return promedio;
}

int main() {
    int cursoA[5];
    int cursoB[5];
    printf("Notas curso A: \n");
    cargar(cursoA);
    printf("Notas curso B: \n");
    cargar(cursoB);
    printf("Promedio del curso A: %i", promedio(cursoA));
    printf("\nPromedio del curso B: %i\n", promedio(cursoB));

    if(promedio(cursoA)==promedio(cursoB)){
       printf("Los dos cursos tienen el mismo promedio");
    } else {
            if(promedio(cursoA)>promedio(cursoB)){
               printf("El curso con mayor promedio de notas es el A");
            } else {
                printf("El curso con mayor promedio de notas es el B");
            }
    }

    getch();
    return 0;
}
