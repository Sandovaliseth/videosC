#include<stdio.h>
#include<conio.h>

void intercambiar(int *pe1, int *pe2){
    int aux=*pe1;
    *pe1=*pe2;
    *pe2=aux;
}

int main() {
    int x=10;
    int z=20;
    printf("%i %i\n", x, z);
    intercambiar(&x, &z);
    printf("%i %i\n", x, z);

    getch();
    return 0;
}
