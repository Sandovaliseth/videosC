#include<stdio.h>
#include<conio.h>

void cargar(float sueldos[4]){
    for(int x=0; x<4; x++) {
        printf("Ingrese un sueldo: ");
        scanf("%f", &sueldos[x]);
    }
}

float gastosTurno(float sueldos[4]){

}

int main() {
    float sueldoMa[4];
    float sueldoTar[4];
    printf("Ingrese o cargue los sueldos del turno de la mañana:");
    cargar(sueldoMa);
    printf("Ingrese o cargue los sueldos del turno de la tarde:");
    cargar(sueldoTar);

    getch();
    return 0;
}
