#include<conio.h>
#include<stdio.h>

int main() {
    int v1, v2, result;
    printf("Ingrese el primer valor: ");
    scanf("%i", &v1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &v2);
    result=(v1=v2)?v1+v2:v1*v2;
    printf("Resultado: %i\n", result);

    getch();
    return 0;
}
