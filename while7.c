#include<stdio.h>
#include<conio.h>

int main() {
    int n, x=1, cont1=0, cont2=0;
    float sueldo, importe=0;

    printf("Ingrese el valor de n o la cantidad de empleados: ");
    scanf("%i", &n);

    while(x<=n) {
         printf("Ingrese el sueldo de cada empleado: ");
         scanf("%f", &sueldo);
         if(sueldo<=300) {
            cont1=cont1+1;
         } else {
            cont2=cont2+1;
         }

        importe= importe+sueldo;
        x=x+1;
    }

    printf("Cantidad de empleados con sueldos entre 100 y 300: %i", cont1);
    printf("\nCantidad de empleados con sueldos mayores a 300: %i", cont2);
    printf("\nGastos totales de la empresa: %f", importe);

    getch();
    return 0;
}
