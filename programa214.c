#include<stdio.h>
#include<conio.h>

int proximoMultiplo(){
    static int mult2;
    mult2+=2;
    return mult2;
}

int main(){
    for(int f=1; f<=10; f++)
        printf("%i ", proximoMultiplo());

    getch();
    return 0;
}
