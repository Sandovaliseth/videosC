#include<stdio.h>
#include<conio.h>

void cargar(char nombres[5][41], int edades[5]){
    for(int f=0; f<5; f++) {
        printf("Ingrese el nombre de la persona:");
        gets(nombres[f]);
        printf("Ingrese la edad de la persona:");
        scanf("%i", &edades[f]);
        fflush(stdin);
    }
}

void imprimir(char nombres[5][41], int edades[5]){
    printf("\nListado nombres: \n");
    for(int f=0; f<5; f++) {
        if(edades[f]>=18){
            printf("%s\n", nombres[f]);
        }
    }
}

int main() {
    char nombres[5][41];
    int edades[5];
    cargar(nombres, edades);
    imprimir(nombres, edades);

    getch();
    return 0;
}
