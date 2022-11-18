#include<conio.h>
#include<stdio.h>

int main() {
    int v1, v2, may;
    printf("Ingrese el primer valor: ");
    scanf("%i", &v1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &v2);
    may=(v1>v2)?v1:v2;
    printf("Mayor: %i\n", may);

    getch();
    return 0;
}
