#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    FILE *arch;
    arch=fopen("archivo6.dat","rb");
    if (arch==NULL)
        exit(1);
    fseek(arch,0,SEEK_END);
    int tamano=ftell(arch);
    printf("El tamano del archivo es de %i bytes", tamano);
    fclose(arch);
    getch();
    return 0;
}
