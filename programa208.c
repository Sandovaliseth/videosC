#include<stdio.h>
#include<conio.h>

typedef struct {
    int codigo;
    char descripcion[41];
    float precio;
} tproducto;

int main(){
    tproducto pro1,pro2;
    printf("Ingrese el codigo del producto:");
    scanf("%i",&pro1.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion:");
    gets(pro1.descripcion);
    printf("Ingrese el precio:");
    scanf("%f",&pro1.precio);
    printf("Ingrese el codigo del producto:");
    scanf("%i",&pro2.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion:");
    gets(pro2.descripcion);
    printf("Ingrese el precio:");
    scanf("%f",&pro2.precio);
    if (pro1.precio>pro2.precio)
    {
        printf("El producto %s tiene un precio mayor",pro1.descripcion);
    }
    else
    {
        if (pro2.precio>pro1.precio)
        {
            printf("El producto %s tiene un precio mayor",pro2.descripcion);
        }
        else
        {
            printf("Tienen igual precio");
        }
    }
    getch();
    return 0;
}
