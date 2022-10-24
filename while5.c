#include<stdio.h>
#include<conio.h>

int main() {
    int x, notas, bajas, altas;
    x=1;
    altas= 0;
    bajas= 0;

    while(x<=10) {
         printf("Ingrese las notas: ");
         scanf("%i", &notas);
         if(notas>=7) {
            altas = altas +1;
         } else {
            bajas = bajas + 1;
         }
         x = x+1;
    }

    printf("Las notas mayores a 7 son: %i", altas);
    printf("Las notas menores son: %i", bajas);

    getch();
    return 0;
}

