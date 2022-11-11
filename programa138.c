#include<stdio.h>
#include<conio.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto p[4]){
    for(int f=0; f<4; f++){
        printf("Ingrese el codigo del producto: ");
        scanf("%i", &p[f].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion: ");
        gets(p[f].descripcion);
        printf("Ingrese el precio del producto: ");
        scanf("%f", &p[f].precio);
    }
}

void imprimir(struct producto p[4]){
    printf("LISTA DE PRODUCTOS\n");
    for(int f=0; f<4; f++){
        printf("%i - %s - %0.2f\n", p[f].codigo, p[f].descripcion, p[f].precio);
    }
}

void articuloMayor(struct producto p[4]){
    int may=0;
    for(int f=1; f<4; f++){
        if(p[f].precio>p[may].precio){
            may=f;
        }
    }
    printf("El articulo mas caro es: %s", p[may].descripcion);
}

int main() {
    struct producto productos[4];
    cargar(productos);
    imprimir(productos);
    articuloMayor(productos);

    getch();
    return 0;
}
