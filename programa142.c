#include<stdio.h>
#include<conio.h>
#include<string.h>

#define TAMANO 3

struct punto {
    int x;
    int y;
};

struct triangulo {
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};

struct triangulo cargar(){
    struct triangulo t;
    t.punto1.x=10;
    t.punto1.y=34;
    t.punto2.x=100;
    t.punto2.y=23;
    t.punto3.x=10;
    t.punto3.y=78;
    return t;
};

void imprimir(struct triangulo t){
    printf("COORDENADAS DEL TRIANGULO\n");
    printf("Punto 1: (%i,%i)\n", t.punto1.x, t.punto1.y);
    printf("Punto 2: (%i,%i)\n", t.punto2.x, t.punto2.y);
    printf("Punto 3: (%i,%i)", t.punto3.x, t.punto3.y);
}

int main() {
    struct triangulo tri;
    tri= cargar();
    imprimir(tri);

    getch();
    return 0;
}

