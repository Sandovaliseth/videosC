#include<stdio.h>
#include<conio.h>

int main() {

    char oracion[201];
    int x=0, espacios=0;

    printf("Ingrese una oracion: ");
    gets(oracion);

    while(oracion[x]!='\0') {
        if(oracion[x]==' ') {
            espacios++;
        }
        x++;
    }

    int palabras=espacios+1;
    printf("La cantidad de palabras de la oracion son %i", palabras);

    getch();
    return 0;
}
