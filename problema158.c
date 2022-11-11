#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int largo(char *cadena) {
    int cant=0;
    while(*cadena!='\0') {
        cant++;
        cadena++;
    }
    return cant;
}

int main() {
    int *pe;
    int tam;
    printf("Ingrese los elementos del vector: ");
    scanf("%i", &tam);
    pe=malloc(tam*sizeof(int));
    for(int f=0; f<tam; f++) {
        printf("Ingrese un elemento: ");
        scanf("%i", &pe[f]);
    }
    printf("VECTOR: ");
    for(int f=0; f<tam; f++) {
       printf("%i ", pe[f]);
    }
    free(pe);

    getch();
    return 0;
}
