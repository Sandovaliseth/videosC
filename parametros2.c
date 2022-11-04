#include<stdio.h>
#include<conio.h>


void calcularSueldo(float costoHora, int cantidadHoras) {
    float sueldo = costoHora*cantidadHoras;
    printf("El sueldo total a pagar es de: %0.2f\n", sueldo);
}

int main() {
    float costoHora;
    int cantidadHoras;
    char opcion;

    do{
        printf("Ingrese el pago por hora de un empleado: ");
        scanf("%f", &costoHora);
        printf("Ingrese la cantidad de horas trabajadas: ");
        scanf("%i", &cantidadHoras);
        calcularSueldo(costoHora,cantidadHoras);
        printf("Desea agregar los datos de otro emepleado [s/n]: ");
        scanf(" %c", &opcion);
    } while(opcion=='s');

    getch();
    return 0;
}
