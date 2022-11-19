#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crear(){
    FILE *arch;
    arch=fopen("archivo6.dat","wb");
    if (arch==NULL)
        exit(1);

    int valor1=10;
    fwrite(&valor1, sizeof(int), 1, arch);
    int pos=ftell(arch);
    printf("Posicion del puntero de archivo luego de grabar un entero:%i\n", pos);
    int valor2=20;
    fwrite(&valor2, sizeof(int), 1, arch);
    pos=ftell(arch);
    printf("Posicion del puntero de archivo luego de grabar un entero:%i\n", pos);
    int valor3=30;
    fwrite(&valor3, sizeof(int), 1, arch);
    pos=ftell(arch);
    printf("Posicion del puntero de archivo luego de grabar un entero:%i\n", pos);
    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch=fopen("archivo6.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Listado de todos los datos del archivo\n");
    int x, pos;
    fread(&x, sizeof(int),1,arch);
    while(!feof(arch)){
        pos=ftell(arch);
        printf("dato leido %i y posicion del puntero %i\n", x, pos);
        fread(&x,sizeof(int), 1, arch);
    }

    fclose(arch);
}

int main(){
    crear();
    imprimir();
    getch();
    return 0;
}
