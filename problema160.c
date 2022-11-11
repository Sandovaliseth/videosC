#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char *palabra;
    int cant;
    printf("Cuantas letra tiene la palabra que ingresara: ");
    scanf("%i", &cant);
    fflush(stdin);
    palabra=malloc((cant+1)*sizeof(char));
    printf("Ingrese ahora la palabra:");
    gets(palabra);
    printf("La palabra ingresada es %s", palabra);
    free(palabra);

    getch();
    return 0;
}

