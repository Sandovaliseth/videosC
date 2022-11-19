#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    float f1,f2;

    FILE *arch;
    arch=fopen("archivo2.dat","rb");
    if (arch==NULL)
        exit(1);

    fseek(arch, 8, SEEK_SET);
    fread(&f1, sizeof(float), 1, arch);
    printf("Primer float: %0.2f\n", f1);
    fread(&f2, sizeof(float), 1, arch);
    printf("Segundo float: %0.2f\n", f2);

    fclose(arch);
    printf("Fin del contenido.");

    getch();
    return 0;
}

