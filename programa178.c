#include<stdio.h>
#include<conio.h>

#define tamano 5

void cargar(int vec[tamano]){
    int f;
    for(f=0; f<tamano; f++){
        printf("Ingrese un elemento: ");
        scanf("%i", &vec[f]);
    }
}

void ordenar(int vec[tamano], int cant){
    if(cant>1){
        for(int i=0; i<cant-1; i++) {
            if(vec[i]>vec[i+1]){
                int aux= vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=aux;
            }
        }
        ordenar(vec, cant-1);
    }
}

void imprimir(int vec[tamano]){
    printf("\nListado:\n");
    for(int f=0; f<tamano; f++){
        printf("%i - ", vec[f]);
    }
}

int main(){
    int vector[tamano];
    cargar(vector);
    imprimir(vector);
    ordenar(vector, tamano);
    imprimir(vector);

    getch();
    return 0;
}

