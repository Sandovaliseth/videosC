#include<stdio.h>
#include<conio.h>

int main() {

    int f, altas=0, bajas=0;
    float alturas[5], suma=0, promedio;

    for(f=0; f<5; f++) {
        printf("Ingrese la altura de la persona: ");
        scanf("%f", &alturas[f]);
    }

    for(f=0; f<5; f++) {
        suma=suma+alturas[f];
    }

    promedio= suma/5;

    for(f=0; f<5; f++) {
         if(alturas[f]>promedio) {
            altas++;
        } else {
             if(alturas[f]<promedio) {
                bajas++;
            }
        }
    }

    printf("\nPromedio de las alturas: %0.2f", promedio);
    printf("\nPersonas con alturas mayores al promedio: %i", altas);
    printf("\nPersonas con alturas menores al promedio: %i", bajas);

    getch();
    return 0;
}
