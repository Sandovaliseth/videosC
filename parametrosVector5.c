#include<stdio.h>
#include<conio.h>

void cargar(float alturas[5]){
    for(int x=0; x<5; x++) {
        printf("Ingrese una altura: ");
        scanf("%f", &alturas[x]);
    }
}

float calcularPromedio(float alturas[5]){
    float suma=0, promedio;
    for(int x=0; x<5; x++) {
        suma= suma+alturas[x];
    }
    return promedio=suma/5;
}

void altasBajas(float alturas[5], float promedio){

    int altos=0, bajos=0;
    for(int x=0; x<5; x++) {
        if(alturas[x]>promedio) {
            altos++;
        } else {
            if(alturas[x]<promedio) {
                bajos++;
            }
        }
    }
    printf("\nCantidad de personas altas: %i", altos);
    printf("\nCantidad de personas mas bajas al promedio: %i", bajos);
}

int main() {
    float alturas[5], prom;
    cargar(alturas);
    prom= calcularPromedio(alturas);
    printf("\nAltura promedio: %0.2f\n", prom);
    altasBajas(alturas, prom);

    getch();
    return 0;
}
