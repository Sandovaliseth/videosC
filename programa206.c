#include<stdio.h>
#include<conio.h>

union dato {
    int x;
    char letra;
    float z;
};

int main()
{
    union dato d;
    d.x=10;
    printf("Impresion del entero:%i\n",d.x);
    d.letra='A';
    printf("Impresion del caracter:%c\n",d.letra);
    printf("Impresion del entero:%i\n",d.x);
    d.z=5.25;
    printf("Impresion del float:%0.2f\n",d.z);
    printf("Impresion del entero:%i\n",d.x);
    getch();
    return 0;
}

