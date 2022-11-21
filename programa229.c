#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define TAM 10

void grabar(){
    FILE *arch;
    arch=fopen("archivo7.dat","wb");
    if (arch==NULL)
        exit(1);

    int vec[TAM]={1,2,3,4,5,6,7,8,9,10};
    fwrite(&vec, sizeof(int), 1, TAM, arch);
    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch=fopen("archivo7.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Listado de todos los datos del archivo\n");
    int int vec[TAM];
    fread(&vec, sizeof(int), 1, TAM, arch);
    while(!feof(arch)){
        for(int i=0; i<TAM; i++){
            printf("%i ", vec[f]);
        }
    }

    fclose(arch);
}

int main(){
    grabar();
    imprimir();
    getch();
    return 0;
}

