#include<stdio.h>
#include<conio.h>

int main() {

    char palabra[30];
    int x=0;

    printf("Ingrese la palabra: ");
    gets(palabra);

    while(palabra[x]!='\0') {
        x++;
    }

    printf("La palabra %s tiene %i caracteres", palabra, x);

    getch();
    return 0;
}
