#include<stdio.h>
#include<conio.h>

int main() {

    int edad1, edad2;
    char nombre1[21], nombre2[21];

    printf("Ingrese el nombre de la primera persona: ");
    gets(nombre1);
    printf("Ingrese la edad de la primera persona:  ");
    scanf("%i", &edad1);

    fflush(stdin);
    printf("Ingrese el nombre de la segunda persona: ");
    gets(nombre2);
    printf("Ingrese la edad de la segunda persona:  ");
    scanf("%i", &edad2);

    if(edad1>edad2) {
        printf("La persona con mayor edad es: %s", nombre1);
    } else {
         if(edad2>edad1) {
            printf("La persona con mayor edad es: %s", nombre2);
        } else {
            printf("Las edades de %s y %s son las mismas", nombre1, nombre2);
        }
    }

    getch();
    return 0;
}
