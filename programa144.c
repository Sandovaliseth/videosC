#include<stdio.h>
#include<conio.h>

int main() {
    int valor1, valor2;
    int *pe;
    pe=&valor1;
    *pe=100;
    pe=&valor2;
    *pe=200;
    printf("La variable 1 tiene un valor de: %i\n", valor1);
    printf("La variable 2 tiene un valor de: %i\n", valor2);

    getch();
    return 0;
}
