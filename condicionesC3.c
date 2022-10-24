#include<stdio.h>
#include<conio.h>

int main() {
    int dia, mes, aa;
    printf("Ingrese el dia: ");
    scanf("%i", &dia);
    printf("Ingrese el mes: ");
    scanf("%i", &mes);
    printf("Ingrese el año: ");
    scanf("%i", &aa);
    if(dia==25 && mes==12){
            printf("Corresponde a navidad");
    }

    getch();
    return 0;
}
