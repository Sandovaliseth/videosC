#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

    char palabra[31];

    printf("Ingrese una palabra: ");
    gets(palabra);

    /*int cant=strlen(palabra);

    printf("\nLa palabra %s tiene %i letras", palabra, cant );
    Otra opcion
    */

    printf("\nLa palabra %s tiene %i letras", palabra, strlen(palabra));

    getch();
    return 0;
}
