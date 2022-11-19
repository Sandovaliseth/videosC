#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crear(){
    int valor;
    FILE *arch;
    arch=fopen("archivo4.dat","wb");
    if (arch==NULL)
        exit(1);

    do{
        printf("Ingrese un elemento (0 para finalizar): ");
        scanf("%i", &valor);
        if(valor!=0){
            fwrite(&valor, sizeof(int), 1, arch);}
    } while(valor!=0);

    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch=fopen("archivo4.dat","rb");
    if (arch==NULL)
        exit(1);
    int valor;
    fread(&valor, sizeof(int), 1, arch);
    while(!feof(arch)){
        printf("%i ", valor);
        fread(&valor, sizeof(int), 1, arch);
    }
    fclose(arch);
}

int main(){
    crear();
    printf("Lista completa\n");
    imprimir();

    getch();
    return 0;
}
