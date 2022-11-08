#include<stdio.h>
#include<conio.h>

void cargar(int sueldos[5]){
    for(int x=0; x<5; x++) {
        printf("Ingrese el sueldo: ");
        scanf("%i", &sueldos[x]);
    }
}

void ordenar(int sueldos[5]){
    int aux;
    for(int x=0; x<4; x++) {
        for(int i=0; i<4; i++) {
            if(sueldos[i]>sueldos[i+1]){
                aux= sueldos[i];
                sueldos[i]=sueldos[i+1];
                sueldos[i+1]=aux;
            }
        }
    }
}

void imprimir(int sueldos[5]){
    for(int x=0; x<5 ; x++) {
        printf("%i \n", sueldos[x]);
    }
}

int main() {
    int sueldos[5];
    cargar(sueldos);
    ordenar(sueldos);
    imprimir(sueldos);

    getch();
    return 0;
}
