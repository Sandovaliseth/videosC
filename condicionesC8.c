#include<stdio.h>
#include<conio.h>

int main() {
    float sueldo, aumento, sueldoPagar;
    int aaAnt;
    printf("Ingrese el sueldo del operario: ");
    scanf("%f", &sueldo);
    printf("Ingrese los años de antiguedad: ");
    scanf("%i", &aaAnt);

    if(sueldo<500 && aaAnt>=10){
        aumento=sueldo*0.20;
        sueldoPagar = sueldo + aumento;
        printf("Sueldo a pagar: %f", sueldoPagar);
    } else {
        if(sueldo<500){
            aumento=sueldo*0.05;
            sueldoPagar = sueldo + aumento;
            printf("Sueldo a pagar: %f", sueldoPagar);
        } else {
            printf("Sueldo a pagar: %f", sueldo);
        }
    }

    getch();
    return 0;
}
