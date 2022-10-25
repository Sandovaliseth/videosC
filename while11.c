#include<stdio.h>
#include<conio.h>

int main() {
    int n, x=1, pares=0, impares=0, numero;

    printf("Ingrese la cantidad de los numeros a ingresar: ");
    scanf("%i", &n);

    while(x<=n) {
        printf("Ingrese los valores: ");
        scanf("%i", &numero);
        if(numero%2==0) {
            pares=pares+1;
        } else {
            impares=impares+1;
        }
        x=x+1;
    }

    printf("\nCantidad de numeros pares: %i", pares);
    printf("\nCantidad de numeros impares: %i", impares);

    getch();
    return 0;
}
