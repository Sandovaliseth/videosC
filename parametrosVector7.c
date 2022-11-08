#include<stdio.h>
#include<conio.h>

void cargar(int vector[8]){
    for(int x=0; x<8; x++) {
        printf("Ingrese un valor: ");
        scanf("%i", &vector[x]);
    }
}

int sumar(int vector[8]){
    int suma=0;
    for(int x=0; x<8; x++) {
        suma= suma+vector[x];
    }

    return suma;
}

int sumaMayores36(int vector[8]){
    int suma=0;
    for(int x=0; x<8; x++) {
        if(vector[x]>36){
            suma=suma+vector[x];
        }
    }

    return suma;
}


int cantidadMayores50(int vector[8]){
    int mayores=0;
    for(int x=0; x<8; x++) {
        if(vector[x]>50){
            mayores++;
        }
    }

    return mayores;
}

int main() {
    int vector[8];
    cargar(vector);
    printf("Valor acumulado de todos los elementos: %i\n" , sumar(vector));
    printf("Valor acumulado de los elementos del vector que sean mayores a 36: %i\n" , sumaMayores36(vector));
    printf("Cantidad de componentes con valores mayores a 50: %i\n" , cantidadMayores50(vector));

    getch();
    return 0;
}

