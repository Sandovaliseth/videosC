#include<stdio.h>
#include<conio.h>

int main() {

    int f, vect[10], orden=1;

    for(f=0; f<10; f++) {
        printf("Ingrese un numero: ");
        scanf("%i", &vect[f]);
    }

    for(f=0; f<9; f++) {
        if(vect[f+1]<vect[f]) {
            orden=0;
            break;
        }
    }

    if(orden==1) {
        printf("El vector esta ordenado de menor a mayor");
    } else {
        printf("El vector no esta ordenado de menor a mayor");
    }

    getch();
    return 0;
}
