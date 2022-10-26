#include<stdio.h>
#include<conio.h>

int main() {

    int f, edad, promedio1, promedio2, promedio3;
    int suma1=0, suma2=0, suma3=0;

    for(f=1; f<=5; f++) {
        printf("Ingrese las edades de los estudiantes de la manana: ");
        scanf("%i", &edad);
        suma1= suma1+edad;
    }

    promedio1= suma1/5;
    printf("\n");

    for(f=1; f<=6; f++) {
        printf("Ingrese las edades de los estudiantes de la tarde: ");
        scanf("%i", &edad);
        suma2= suma2+edad;
    }
    promedio2= suma2/6;
    printf("\n");

    for(f=1; f<=11; f++) {
        printf("Ingrese las edades de los estudiantes de la noche: ");
        scanf("%i", &edad);
        suma3= suma3+edad;
    }
    promedio3= suma3/11;
    printf("\n");

    printf("\nEl promedio de las edades del turno de la manana es: %i", promedio1);
    printf("\nEl promedio de las edades del turno de la tarde es: %i", promedio2);
    printf("\nEl promedio de las edades del turno de la noche es: %i", promedio3);

    if(promedio1<promedio2 && promedio1<promedio3) {
        printf("\nEl turno de la manana tiene un promedio menor");
    } else {
        if(promedio2<promedio3) {
            printf("\nEl turno de la tarde tiene un promedio menor");
        } else {
            printf("\nEl turno de la noche tiene un promedio menor");
        }
    }

    getch();
    return 0;
}
