#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *archivo;
    char nombre[50], apellido[50];
    int edad;
    float estatura;
    system("cls");
    fflush(stdin);

    archivo=fopen("datos.txt", "w+");
    fputs("Ericka Zavala 31 1.71", archivo);

    rewind(archivo);
    fscanf(archivo, "%s %s %d %f", nombre, apellido, &edad, &estatura);

    printf("\nNombre: %s", nombre);
    printf("\nApellido: %s", apellido);
    printf("\nEdad: %d", edad);
    printf("\nEstatura: %0.2f", estatura);

    fclose(archivo);
    printf("\n");
    system("pause");

    return 0;
}
