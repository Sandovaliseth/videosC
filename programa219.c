#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    FILE *arch;
    arch=fopen("archivo1.dat","rb");
    if (arch==NULL)
        exit(1);

    char c;
    float v2;
    fread(&c, sizeof(char), 1, arch);
    fseek(arch, 4, SEEK_CUR);
    fread(&v2, sizeof(float), 1, arch);
    printf("Caracter: %c\n", c);
    printf("Float: %0.2f", v2);

    fclose(arch);

    getch();
    return 0;
}
