#include<stdio.h>
#include<conio.h>

void main() {
    float costoHora;
    int cantidadHoras;
    char opcion;

    do{
        printf("Ingrese el pago por hora de un empleado: ");
        scanf("%f", &costoHora);
        printf("Ingrese la cantidad de horas trabajadas: ");
        scanf("%i", &cantidadHoras);
        totalPagar(costoHora,cantidadHoras);
        printf("Desea agregar los datos de otro emepleado [s/n]: ");
        scanf(" %c", &opcion);
    } while(opcion=='s');

    getch();
    return 0;
}

void totalPagar(float costo, int horas) {
    printf("%f", costo);
    /*float sueldo = costo*horas;
    printf("El sueldo total a pagar es de: %0.2f\n", sueldo); */
}
