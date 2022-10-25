#include<stdio.h>
#include<conio.h>

int main() {
    int multiplos=8;

    while(multiplos<=500) {
        printf("%i - ", multiplos);
        multiplos=multiplos+8;
    }

    getch();
    return 0;
}
