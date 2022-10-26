#include<stdio.h>
#include<conio.h>

int main() {

    int n, f, lado1, lado2, lado3, equilatero=0, isosceles=0, escaleno=0, menor;

    printf("Ingrese el valor de n: ");
    scanf("%i", &n);
;
    for(f=1; f<=n; f++) {
        printf("\nIngrese el primer lado del triangulo: ");
        scanf("%i", &lado1);
        printf("Ingrese el segundo lado del triangulo: ");
        scanf("%i", &lado2);
        printf("Ingrese el tercer lado del triangulo: ");
        scanf("%i", &lado3);
        if(lado1==lado2 && lado1==lado3) {
                printf("Es un triangulo equilatero");
                equilatero++;
        } else {
            if(lado1==lado2 || lado1==lado3 || lado2==lado3) {
                printf("Es un triangulo isosceles");
                isosceles++;
            } else {
                printf("Es un triangulo escaleno");
                escaleno++;
                }
            }
    }

    printf("\nLa cantidad de los triangulos que son equilateros son: %i", equilatero);
    printf("\nLa cantidad de los triangulos que son isosceles son: %i", isosceles);
    printf("\nLa cantidad de los triangulos que son escalenos son: %i", escaleno);

    if(equilatero<isosceles && equilatero<escaleno){
        printf("\nHay menor cantidad de triangulos equilateros");
    } else if (isosceles<escaleno) {
        printf("\nHay menor cantidad de triangulos isosceles");
    } else {
        printf("\nHay menor cantidad de triangulos escalenos");
    }

    getch();
    return 0;
}
