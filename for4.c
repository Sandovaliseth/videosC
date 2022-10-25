#include<stdio.h>
#include<conio.h>

int main() {

    int multiplos3=0, multiplos5=0, f, num;

    for(f=1; f<=10; f++) {
        printf("Ingrese un valor: ");
        scanf("%i", &num);
        if(num%3==0) {
            multiplos3++;
        } if(num%5==0) {
            multiplos5++;
        }
    }

    printf("\nCantidad de los valores ingresados multiplos de 3: %i", multiplos3);
    printf("\nCantidad de los valores ingresados multiplos de 5: %i", multiplos5);


    getch();
    return 0;
}

