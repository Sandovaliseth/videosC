#include<stdio.h>
#include<conio.h>

int main() {
    int x, y;
    printf("Ingrese la coordenada en x: ");
    scanf("%i", &x);
    printf("Ingrese la coordenada en y: ");
    scanf("%i", &y);

    if(x>0 && y>0){
        printf("Primer cuadrante");
    } else {
        if(x<0 && y>0){
            printf("Segundo cuadrante");
        } else {
            if(x<0 && y<0){
                printf("Tercer cuadrante");
            } else {
                if(x>0 && y<0){
                    printf("Cuarto cuadrante");
                } else {
                    printf("Sobre un eje");
                }
            }
        }
    }

    getch();
    return 0;
}
