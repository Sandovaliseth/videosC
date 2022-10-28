#include<stdio.h>
#include<conio.h>

int main() {

    int sueldos[5], f;

    for(f=0; f<5; f++) {
        printf("Ingrese el valor del sueldo: ");
        scanf("%i", &sueldos[f]);
    }

    printf("Listado de sueldos: \n");
    for(f=0; f<5; f++) {
        printf("%i", sueldos[f]);
        printf("\n");
    }

    getch();
    return 0;
}
