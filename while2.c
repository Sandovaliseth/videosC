#include<stdio.h>
#include<conio.h>

int main() {
    int n, x=1;
    printf("Ingrese el valor final: ");
    scanf("%i", &n);

    while(x<=n) {
        printf("%i - ", x);
        x=x+1;
    }

    getch();
    return 0;
}
