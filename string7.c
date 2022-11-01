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

    if(strlen(nombre1)> strlen(nombre2)) {
         printf("%s \n %s", nombre1, nombre2);
    } else {
        printf("%s \n%s", nombre2, nombre1);
    }

    getch();
    return 0;
}
