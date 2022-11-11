#include<stdio.h>
#include<conio.h>
#include<string.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

int main() {
    struct producto prod1, prod2;
    printf("Ingrese el codigo del producto: ");
    scanf("%i", &prod1.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion: ");
    gets(prod1.descripcion);
    printf("Ingrese el precio del producto: ");
    scanf("%i", &prod1.precio);
    printf("Ingrese el codigo del producto: ");
    scanf("%i", &prod2.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion: ");
    gets(prod2.descripcion);
    printf("Ingrese el precio del producto: ");
    scanf("%i", &prod2.precio);

    if(prod1.precio>prod2.precio){
        printf("El nombre del producto con mayor precio es: %s",prod1.descripcion);
    } else {
        if(prod2.precio>prod1.precio){
            printf("El nombre del producto con mayor precio es: %s",prod2.descripcion);
        } else{
            printf("Ambos productos tienen el mismo precio");
        }
    }

    getch();
    return 0;
}
