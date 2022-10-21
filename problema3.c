#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2, num3, num4, suma, promedio;
    printf("Ingrese el primer numero:");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero:");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero:");
    scanf("%i", &num3);
    printf("Ingrese el cuarto numero:");
    scanf("%i", &num4);
    suma=num1+num2+num3+num4;
    promedio=suma/4;
    printf("La suma es:");
    printf("%i", suma);
    printf("\nEl promedio es:");
    printf("%i", promedio);
    getch();
    return 0;
}
