#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    int v1, v2;
    float f1,f2;

    FILE *arch;
    arch=fopen("archivo2.dat","rb");
    if (arch==NULL)
        exit(1);

    fread(&v1, sizeof(int), 1, arch);
    fread(&v2, sizeof(int), 1, arch);
    printf("Primer entero: %i\n", v1);
    printf("Segundo entero: %i\n", v2);
    fread(&f1, sizeof(float), 1, arch);
    printf("Primer float: %0.2f\n", f1);
    fread(&f2, sizeof(float), 1, arch);
    printf("Segundo float: %0.2f\n", f2);

    fclose(arch);
    printf("Fin del contenido.");

    getch();
    return 0;
}
