#include<stdio.h>
#include<conio.h>

struct pais{
    char nombre[40];
    int cantidadhab;
};

int main() {
    struct pais p1, p2, p3;
    printf("Ingrese el nombre del pais: ");
    gets(p1.nombre);
    printf("Ingrese la cantidad de habitantes: ");
    scanf("%i", &p1.cantidadhab);
    fflush(stdin);
    printf("Ingrese el nombre del pais: ");
    gets(p2.nombre);
    printf("Ingrese la cantidad de habitantes: ");
    scanf("%i", &p2.cantidadhab);
     fflush(stdin);
    printf("Ingrese el nombre del pais: ");
    gets(p3.nombre);
    printf("Ingrese la cantidad de habitantes: ");
    scanf("%i", &p3.cantidadhab);
    fflush(stdin);

    if(p1.cantidadhab>p2.cantidadhab && p1.cantidadhab>p3.cantidadhab){
        printf("El nombre del pais con mas habitantes es: %s",p1.nombre);
    } else {
        if(p2.cantidadhab>p3.cantidadhab){
            printf("El nombre del pais con mas habitantes: %s",p2.nombre);
        } else{
            printf("El nombre del pais con mas habitantes: %s",p3.nombre);
        }
    }

    getch();
    return 0;
}
