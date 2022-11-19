#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void crear(){
    int v1=10, v2=20, v3=30;
    FILE *arch;
    arch=fopen("archivo3.dat","wb");
    if (arch==NULL)
        exit(1);
    fwrite(&v1, sizeof(int), 1, arch);
    fwrite(&v2, sizeof(int), 1, arch);
    fwrite(&v3, sizeof(int), 1, arch);
    fclose(arch);
}

void nuevoAlmacenar(){
    float f1=5.55;
    FILE *arch;
    arch=fopen("archivo3.dat","ab");
    if (arch==NULL)
        exit(1);
    fwrite(&f1, sizeof(float), 1, arch);
    fclose(arch);
}

void imprimir(){
    int v1, v2, v3;
    float f1;
    FILE *arch;
    arch=fopen("archivo3.dat","rb");
    if (arch==NULL)
        exit(1);
    fread(&v1, sizeof(int), 1, arch);
    fread(&v2, sizeof(int), 1, arch);
    fread(&v3, sizeof(int), 1, arch);
    fread(&f1, sizeof(float), 1, arch);
    printf("Primer dato: %i\n", v1);
    printf("Segundo dato: %i\n", v2);
    printf("Tercer dato: %i\n", v3);
    printf("Cuarto dato: %0.2f\n", f1);
    fclose(arch);
    printf("Fin del contenido.");

}

int main(){
    crear();
    nuevoAlmacenar();
    imprimir();

    getch();
    return 0;
}

