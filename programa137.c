#include<stdio.h>
#include<conio.h>

struct punto{
    int x;
    int y;
};

struct punto cargar(){
    struct punto p;
    printf("Ingrese el valor de x: ");
    scanf("%i", &p.x);
    printf("Ingrese el valor de y: ");
    scanf("%i", &p.y);
    return p;
}

void imprimirCuadrante(struct punto p){
    if(p.x>0 && p.y>0){
        printf("El punto con coordenadas (%i,%i) se encuentra en el primer cuadrante", p.x, p.y);
    } else {
        if(p.x<0 && p.y>0){
            printf("El punto con coordenadas (%i,%i) se encuentra en el segundo cuadrante", p.x, p.y);
        } else{
            if(p.x<0 && p.y<0){
                printf("El punto con coordenadas (%i,%i) se encuentra en el tercer cuadrante", p.x, p.y);
            }else{
                if(p.x>0 && p.y<0){
                    printf("El punto con coordenadas (%i,%i) se encuentra en el cuarto cuadrante", p.x, p.y);
                }
            }
        }
    }
    printf("\n");
}

int main() {
    struct punto punto1, punto2, punto3;
    punto1= cargar();
    punto2= cargar();
    punto3= cargar();
    imprimirCuadrante(punto1);
    imprimirCuadrante(punto2);
    imprimirCuadrante(punto3);

    getch();
    return 0;
}

