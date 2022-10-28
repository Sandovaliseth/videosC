#include<stdio.h>
#include<conio.h>

int main() {

    int f, vect1[4], vect2[4], vecSuma[4];

    for(f=0; f<4; f++) {
        printf("Ingrese los elementos del primer vector: ");
        scanf("%i", &vect1[f]);
    }

    for(f=0; f<4; f++) {
        printf("Ingrese los elementos del segundo vector: ");
        scanf("%i", &vect2[f]);
    }

    printf("\nVector resultante:");
    for(f=0; f<4; f++) {
        vecSuma[f]=vect1[f]+vect2[f];
        printf("%i - ", vecSuma[f]);
    }

    getch();
    return 0;
}
