#include<stdio.h>
#include<conio.h>

int main() {
    int x=1, serie=11;

    while(x<=25) {
        printf("%i - ", serie);
        serie=serie+11;
        x=x+1;
    }

    getch();
    return 0;
}
