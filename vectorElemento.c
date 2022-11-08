#include<stdio.h>
#include<conio.h>

void cargar(int vec[5]){
    for(int x=0; x<5; x++) {
        printf("Ingrese elemento: ");
        scanf("%i", &vec[x]);
    }
}

void mayor(int vec[5]){
    int may=vec[0], pos=0;
    for(int x=1; x<5; x++) {
        if(vec[x]>may){
            may=vec[x];
            pos=x;
        }
    }
    printf("El mayor elemento del vector es %i \n", may);
    printf("se encuentra en la posicion %i", pos);
}

int main() {
    int vector[5];
    cargar(vector);
    mayor(vector);

    getch();
    return 0;
}
