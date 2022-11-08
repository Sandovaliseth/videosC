#include<stdio.h>
#include<conio.h>

void cargar(float sueldos[4]){
    for(int x=0; x<4; x++) {
        printf("Ingrese un sueldo: ");
        scanf("%f", &sueldos[x]);
    }
}

float gastosTurno(float sueldos[4]){
    float total=0;
    for(int x=0; x<4; x++) {
        total=total+sueldos[x];
    }
    return total;
}

int main() {
    float sueldoMa[4];
    float sueldoTar[4];
    printf("Ingrese o cargue los sueldos del turno de la manana: \n");
    cargar(sueldoMa);
    printf("Ingrese o cargue los sueldos del turno de la tarde: \n");
    cargar(sueldoTar);

    printf("Gastos del turno de la manana: %0.2f", gastosTurno(sueldoMa));
    printf("\nGastos del turno de la tarde: %0.2f", gastosTurno(sueldoTar));

    getch();
    return 0;
}
