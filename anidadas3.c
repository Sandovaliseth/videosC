#include<stdio.h>
#include<conio.h>

int main() {
    int num;
    printf("Ingrese su valor positivo: ");
    scanf("%i", &num);
    if(num<10){
            printf("Tiene 1 digito");
    } else {
        if(num<100) {
                 printf("Tiene 2 digitos");
            } else {
                if(num<1000) {
                    printf("Tiene 3 digitos");
                } else {
                    printf("Error en la entrada de datos");
                }
            }
    }

    getch();
    return 0;
}
