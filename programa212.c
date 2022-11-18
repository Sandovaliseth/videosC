#include<stdio.h>
#include<conio.h>

void imprimir(){
    //int x=0;
    static int x=0;
    x++;
    printf("%i ",x);
}

int main(){
    imprimir();
    imprimir();
    imprimir();
    getch();
    return 0;
}
