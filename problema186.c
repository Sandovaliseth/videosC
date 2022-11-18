#include<conio.h>
#include<stdio.h>

int main() {
    int nota1, nota2, nota3;
    float promedio;
    printf("Ingrese primera nota: ");
    scanf("%i", &nota1);
    printf("Ingrese segunda nota: ");
    scanf("%i", &nota2);
    printf("Ingrese tercera nota: ");
    scanf("%i", &nota3);
    promedio=(float)(nota1+nota2+nota3)/3;
    printf("Nota final: %0.02f", promedio);

    getch();
    return 0;
}
