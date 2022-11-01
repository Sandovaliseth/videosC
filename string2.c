#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

    char nombre1[31];
    char nombre2[31];
    printf("Ingrese el primer nombre: ");
    gets(nombre1);
    printf("Ingrese el segundo nombre: ");
    gets(nombre2);

    if(strcmp(nombre1, nombre2)==0) {
         printf("\nLos dos son iguales");
    } else {
        if(strcmp(nombre1, nombre2)>0) {
            printf("\nEl nombre mayor alfabeticamente es %s", nombre1);
        } else {
            printf("\nEl nombre mayor alfabeticamente es %s", nombre2);
        }
    }

    getch();
    return 0;
}
