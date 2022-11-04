#include<stdio.h>
#include<conio.h>

int main() {

    float sueldos[6];
    cargarSueldos(sueldos);
    imprimir(sueldos);
    gastos(sueldos);

    getch();
    return 0;
}

void cargarSueldos(float sueldo[6]){
    for(int i=0; i<6; i++) {
        printf("Ingrese un elemento: ");
        scanf("%f", &sueldo[i]);
    }
}

void imprimir(float sueldo[6]){
    printf("Listado de los sueldos: \n");
    for(int i=0; i<6; i++) {
        printf("%0.2f \n", sueldo[i]);
    }
}

void gastos(float sueldo[6]){

    float total=0;
    for(int i=0; i<6; i++) {
        total = total+sueldo[i];
    }
    printf("Gasto total de la empresa en sueldos:\n%0.2f", total);
}

