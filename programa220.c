#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    int v1, v2;
    float f1,f2;
    printf("Ingrese un numero entero: ");
    scanf("%i", &v1);
    printf("Ingrese el segundo entero: ");
    scanf("%i", &v2);
    printf("Ingrese un numero tipo float: ");
    scanf("%f", &f1);
    printf("Ingrese un segundo float: ");
    scanf("%f", &f2);

    FILE *arch;
    arch=fopen("archivo2.dat","wb");
    if (arch==NULL)
        exit(1);

    fwrite(&v1, sizeof(int), 1, arch);
    fwrite(&v2, sizeof(int), 1, arch);
    fwrite(&f1, sizeof(float), 1, arch);
    fwrite(&f2, sizeof(float), 1, arch);

    fclose(arch);
    printf("Se creo un archivo binario que almacena 4 datos.");

    getch();
    return 0;
}
