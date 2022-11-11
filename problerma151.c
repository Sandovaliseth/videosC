#include<stdio.h>
#include<conio.h>

#define TAMANO 5

void cargar(int vect[TAMANO]){
    for(int f=0; f<TAMANO; f++){
        printf("Ingrese un elemento: ");
        scanf("%i", &vect[f]);
    }
}

void mayorMenor(int vect[TAMANO], int *pmayor, int *pmenor){
    *pmayor=vect[0];
    *pmenor=vect[0];
    for(int f=1; f<TAMANO; f++){
        if(vect[f]>*pmayor){
            *pmayor=vect[f];
        }else {
            if(vect[f]<*pmenor){
                *pmenor=vect[f];
            }
        }
    }
}

int main() {
    int vector[TAMANO];
    cargar(vector);
    int mayor, menor;
    mayorMenor(vector, &mayor, &menor);
    printf("El numero mayor del vector es: %i\n", mayor);
    printf("El numero menor del vector es: %i\n", menor);

    getch();
    return 0;
}
