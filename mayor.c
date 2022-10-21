#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2, num3;
    printf("Ingrese el primer valor:");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor:");
    scanf("%i", &num2);
    printf("Ingrese el tercer valor:");
    scanf("%i", &num3);
    if(num1>num2){
            if (num1>num3) {
            printf("El mayor es: %i", num1);
            } else {
                printf("El mayor es: %i", num3);
            }
    } else {
        if (num2>num3) {
            printf("El mayor es: %i", num2);
        } else {
            printf("El mayor es: %i", num3);
        }
    }

    getch();
    return 0;
}
