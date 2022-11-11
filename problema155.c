#include<stdio.h>
#include<conio.h>

#define LARGO 40

void cargar(char *p){
    printf("Ingrese una palabra: ");
    gets(p);
}

void imprimir(char *p) {
    printf("La palabra ingresada es: %s", p);
}

int main() {
    char vector[LARGO];
    cargar(vector);
    imprimir(vector);

    getch();
    return 0;
}
