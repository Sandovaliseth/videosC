#include<stdio.h>
#include<conio.h>

void main() {
    int cantidadHoras;
    float pagoHora;
    char opcion;

    do{
        printf("Ingrese el pago por hora de un empleado: ");
        scanf("%f", &pagoHora);
        printf("Ingrese la cantidad de horas trabajadas: ");
        scanf("%i", &cantidadHoras);
        totalPagar(pagoHora, cantidadHoras);
    } while(opcion=='s');

    getch();
    return 0;
}

void totalPagar(float pago, int horas) {
    float sueldo = pago*horas;
    printf("El sueldo total a pagar es de: %0.2f", sueldo);
}
