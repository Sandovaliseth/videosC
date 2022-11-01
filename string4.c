#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

    char nombre[31];
    char apellido[31];
    char nombreCompleto[62];
    printf("Ingrese el nombre de la persona: ");
    gets(nombre);
    printf("Ingrese el apellido de la persona: ");
    gets(apellido);

    strcpy(nombreCompleto, nombre);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, apellido);

    printf("%s", nombreCompleto);

    getch();
    return 0;
}
