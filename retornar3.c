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

    printf("El promedio de los tres valores es: %i", promedio(num1, num2, num3));

    getch();
    return 0;
}

int promedio(int valor1, int valor2, int valor3) {

    int suma=valor1+valor2+valor3;
    int promedio=suma/3;
    return promedio;
}

/* Para retornar un float es:
float promedio(int valor1, int valor2, int valor3) {

    int suma=valor1+valor2+valor3;
    como suma es entero se debe anteceder un float para convertir a suma en decimal
    float promedio=(float)suma/3;
    return promedio;
}
*/
