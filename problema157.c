#include<stdio.h>
#include<conio.h>

int largo(char *cadena) {
    int cant=0;
    while(*cadena!='\0') {
        cant++;
        cadena++;
    }
    return cant;
}

int main() {
    char nombre[10]="ALAN";
    printf("El nombre %s tiene %i caracteres ", nombre, largo(nombre));

    getch();
    return 0;
}
