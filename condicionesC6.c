#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2, num3;
    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &num3);
    if(num1<10 || num2<10 || num3<10){
        printf("Al menos uno de los valores es menor a diez");
    }

    getch();
    return 0;
}
