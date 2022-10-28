#include<stdio.h>
#include<conio.h>

int main() {

    int f;
    float turnoM[4], turnoT[4], manana=0, tarde=0;

    for(f=0; f<4; f++) {
        printf("Ingrese el sueldo de los empleado de la manana: ");
        scanf("%f", &turnoM[f]);
    }

     for(f=0; f<4; f++) {
        printf("Ingrese el sueldo de los empleado de la tarde: ");
        scanf("%f", &turnoT[f]);
    }

    for(f=0; f<4; f++) {
        manana= manana+turnoM[f];
        tarde= tarde+turnoT[f];
    }

    printf("\nTotal gastos del turno de la manana: %0.2f", manana);
    printf("\nTotal gastos del turno de la tarde: %0.2f", tarde);

    getch();
    return 0;
}

