#include<stdio.h>
#include<conio.h>

int main() {
    int nota1, nota2, nota3, promedio;
    printf("Ingrese la primera nota:");
    scanf("%i", &nota1);
    printf("Ingrese la segunda nota:");
    scanf("%i", &nota2);
    printf("Ingrese la tercer nota:");
    scanf("%i", &nota3);
    promedio = (nota1+nota2+nota3)/3;
    if(promedio>=7){
        printf("Promocionado");
    } else {
        if (promedio>=4) {
            printf("Regular");
        } else {
            printf("Reprobado");
        }
    }

    getch();
    return 0;
}
