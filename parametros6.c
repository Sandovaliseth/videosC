#include<stdio.h>
#include<conio.h>

int main() {

    int n=10;
    mostrarHasta(n);

    getch();
    return 0;
}

void mostrarHasta(int tamano) {
    if(tamano<0) {
        printf("Error");
    } else {
        int x;
        for(x=1; x<=tamano; x++) {
             printf("%i - ", x);
        }
    }
}
