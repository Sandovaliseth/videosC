#include<stdio.h>
#include<conio.h>

int main() {
    int num1, num2;
    printf("Ingrese el primer valor:");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor:");
    scanf("%i", &num2);
    if(num1>num2){
        printf("El numero mayor es: %i",num1);
    } else {
        printf("El numero mayor es: %i",num2);
    }
    getch();
    return 0;
}
