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

    if(strcmp(nombre1, nombre2)<0) {
         printf("%s - %s", nombre1, nombre2);
    } else {
        printf("%s - %s", nombre2, nombre1);
    }

    getch();
    return 0;
}
