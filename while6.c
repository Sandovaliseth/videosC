#include<stdio.h>
#include<conio.h>

int main() {
    int n, x=1;
    float estatura, suma=0, promedio;

    printf("Ingrese el valor de n o la cantidad de personas: ");
    scanf("%i", &n);

    while(x<=n) {
         printf("Ingrese la56 estatura o altura: ");
         scanf("%f", &estatura);
         suma= suma+estatura;
         x=x+1;
    }

    promedio= suma/n;
    printf("La altura promedio es: %f", promedio);

    getch();
    return 0;
}
