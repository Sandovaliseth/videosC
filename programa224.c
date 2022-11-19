#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crear(){
    int v1=10, v2=20, v3=30;
    FILE *arch;
    arch=fopen("archivo4.dat","wb");
    if (arch==NULL)
        exit(1);
    fwrite(&v1, sizeof(int), 1, arch);
    fwrite(&v2, sizeof(int), 1, arch);
    fwrite(&v3, sizeof(int), 1, arch);
    fclose(arch);
}

void abrirModificar(){
    FILE *arch;
    arch=fopen("archivo4.dat","r+b");
    if (arch==NULL)
        exit(1);
    fseek(arch, 4, SEEK_SET);
    int x=100;
    fwrite(&x, sizeof(int), 1, arch);
    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch=fopen("archivo4.dat","rb");
    if (arch==NULL)
        exit(1);
    int v1, v2, v3;
    fread(&v1, sizeof(int), 1, arch);
    printf("Entero: %i\n", v1);
    fread(&v2, sizeof(int), 1, arch);
    printf("Entero: %i\n", v2);
    fread(&v3, sizeof(int), 1, arch);
    printf("Entero: %i\n", v3);
    fclose(arch);
}

int main(){
    crear();
    printf("Lista original\n");
    imprimir();
    abrirModificar();
    printf("Lista con modificacion en el segundo dato\n");
    imprimir();

    getch();
    return 0;
}
