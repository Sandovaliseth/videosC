#include<stdio.h>
#include<conio.h>

void cargar(int vec[5]){
    for(int x=0; x<5; x++) {
        printf("Ingrese elemento: ");
        scanf("%i", &vec[x]);
    }
}

int menor(int vec[5]){
    int men=vec[0];
    for(int x=1; x<5; x++) {
        if(vec[x]<men  ){
            men=vec[x];
        }
    }
    return men;
}

void verificarRepetido(int vec[5], int men){
    int cant=0;
    for(int x=0; x<5; x++) {
        if(vec[x]==men){
            cant++;
        }
    }
    if(cant==1){
        printf("El elemento %i no se repite dentro del vector", men);
    } else {
        printf("El elemento %i se encuentra repetido en el vector", men);
    }
}

int main() {
    int vector[5];
    cargar(vector);
    int men= menor(vector);
    printf("El elemento menor del vector es %i \n", men);
    verificarRepetido(vector, men);

    getch();
    return 0;
}
