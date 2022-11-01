#include<stdio.h>
#include<conio.h>

void main() {
    int f;
    for(f=0; f<3; f++) {
        menor();
        separar();
    }
    /* o
    menor();
    separar();
    menor();
    separar();
    menor(); */
    getch();
    return 0;
}

void menor() {
    int valor1, valor2, valor3, menor;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &valor3);

    if(valor1<valor2 && valor1<valor3) {
        printf("El valor menor es: %i", valor1);
    } else {
        if(valor2<valor3) {
            printf("El valor menor es: %i", valor2);
        } else {
            printf("El valor menor es: %i", valor3);
        }
    }
}

void separar(){
    printf("\n");
}

