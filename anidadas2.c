#include<stdio.h>
#include<conio.h>

int main() {
    int num;
    printf("Ingrese su valor: ");
    scanf("%i", &num);
    if(num==0){
        printf("Es nulo");
    } else {
        if (num>-670) {
            printf("Es positivo");
        } else {
            printf("Es negativo");
        }
    }

    getch();
    return 0;
}
