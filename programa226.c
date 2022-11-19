#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crear(){
    int num;
    FILE *arch;
    arch=fopen("archivo5.dat","wb");
    if (arch==NULL)
        exit(1);

    printf("Ingrese un numero: ");
    scanf("%i", &num);
    for(int f=1; f<=num; f++){
        fwrite(&f, sizeof(int), 1, arch);
    }
    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch=fopen("archivo5.dat","rb");
    if (arch==NULL)
        exit(1);
    int x;
    fread(&x, sizeof(int), 1, arch);
    while(!feof(arch)){
        printf("%i ", x);
        fread(&x, sizeof(int), 1, arch);
    }
    fclose(arch);
}

int main(){
    //Si
    crear();
    printf("Lista completa\n");
    imprimir();

    getch();
    return 0;
}
