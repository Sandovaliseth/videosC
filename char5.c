#include<stdio.h>
#include<conio.h>

int main() {

    int edad1, edad2;
    char sexo1, sexo2;

    printf("Ingrese la edad de la primera persona:  ");
    scanf("%i", &edad1);
    printf("Ingrese el sexo de la primera persona: [m/f]: ");
    scanf(" %c", &sexo1);
    printf("Ingrese la edad de la segunda persona:  ");
    scanf("%i", &edad2);
    printf("Ingrese el sexo de la segunda persona: [m/f]: ");
    scanf(" %c", &sexo2);

    if(edad1>edad2) {
        printf("La edad mayor es %i ", edad1);
        if(sexo1=='m') {
            printf("y el sexo es masculino");
        } else {
            if(sexo1=='f') {
                printf("y el sexo es femenino");
            }
        }
    } else {
         if(edad2>edad1) {
            printf("La edad mayor es %i ", edad2);
            if(sexo2=='m') {
                printf("y el sexo es masculino");
            } else {
                if(sexo2=='f') {
                    printf("y el sexo es femenino");
                }
            }
        } else {
            printf("Las edades son las mismas");
        }
    }

    getch();
    return 0;
}
