#include<stdio.h>
#include<conio.h>

int main() {

    int base1, altura1, base2, altura2;
    printf("Ingrese la base del primer rectangulo: ");
    scanf("%i", &base1);
    printf("Ingrese la altura del segundo rectangulo: ");
    scanf("%i", &altura1);
    printf("Ingrese la base del primer rectangulo: ");
    scanf("%i", &base2);
    printf("Ingrese la altura del segundo rectangulo: ");
    scanf("%i", &altura2);

    if(retornarSuperficie(base1,altura1)==retornarSuperficie(base2,altura2)) {
        printf("La superficie de ambos rectangulos es la misma");
    } else{
        if(retornarSuperficie(base1,altura1)>retornarSuperficie(base2,altura2)) {
            printf("El primer rectangulo tiene una superficie mayor");
        } else {
            printf("El segundo rectangulo tiene una superficie mayor");
        }
    }

    getch();
    return 0;
}

int retornarSuperficie(int lado1, int lado2) {
    int superficie = lado1*lado2;
    return superficie;
}
