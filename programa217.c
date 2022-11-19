#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    FILE *arch;
    arch=fopen("archivo1.dat","rb");
    if (arch==NULL)
        exit(1);

    char c;
    fread(&c, sizeof(char), 1, arch);
    printf("Caracter almacenado: %c\n", c);
    int v1;
    fread(&v1, sizeof(int), 1, arch);
    printf("Entero: %i\n", v1);
    float v2;
    fread(&v2, sizeof(float), 1, arch);
    printf("Float: %0.2f", v2);

    fclose(arch);

    getch();
    return 0;
}
