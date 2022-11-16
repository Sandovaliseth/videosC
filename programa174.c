#include<stdio.h>
#include<conio.h>

void imprimir(int x){
    printf("%i ", x);
    imprimir(x - 1);
}

int main(){
    imprimir(5);
    getch();
    return 0;
}

