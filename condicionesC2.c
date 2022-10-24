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
    if(mes==1 || mes==2 || mes==3){
            printf("Corresponde al primer trimestre");
    }

    getch();
    return 0;
}
