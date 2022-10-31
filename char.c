#include<stdio.h>
#include<conio.h>

int main() {

    char letra1=65;
    char letra2='A';
    char letra3;

    printf("Ingrese un caracter: ");
    scanf("%c", &letra3);

    printf("\n %c", letra1);
    printf("\n %c", letra2);
    printf("\n %c", letra3);

    getch();
    return 0;
}
