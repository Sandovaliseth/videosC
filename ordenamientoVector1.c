#include<stdio.h>
#include<conio.h>

void cargar(int vec[5]){
    for(int x=0; x<5; x++) {
        printf("Ingrese elemento: ");
        scanf("%i", &vec[x]);
    }
}

void ordenarMayorMenor(int vec[5]){
    int aux;
    for(int x=1; x<5; x++) {
        for(int i=0; i<4; i++) {
            if(vec[i]<vec[i+1]){
                aux= vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=aux;
            }
        }
    }
}

void ordenarMenorMayor(int vec[5]){
    int aux;
    for(int x=0; x<4; x++) {
        for(int i=0; i<4; i++) {
            if(vec[i]>vec[i+1]){
                aux= vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=aux;
            }
        }
    }
}

void imprimir(int vec[5]){
    for(int f=0; f<5 ; f++) {
        printf("%i -", vec[f]);
    }

}

int main() {
    int vector[5];
    cargar(vector);
    ordenarMayorMenor(vector);
    printf("Vector ordenado de mayor a menor: \n");
    imprimir(vector);
    ordenarMenorMayor(vector);
    printf("\nVector ordenado de menor a mayor: \n");
    imprimir(vector);

    getch();
    return 0;
}
