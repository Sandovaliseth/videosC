#include<stdio.h>
#include<conio.h>

int main() {
    int totalP, preguntasC, porcentaje;
    printf("Ingrese el total de preguntas en el examen: ");
    scanf("%i", &totalP);
    printf("Ingrese la cantidad de preguntas contestadas correctamente: ");
    scanf("%i", &preguntasC);
    porcentaje= (preguntasC*100)/totalP;
    if(porcentaje>=90){
            printf("Nivel maximo");
    } else {
        if(porcentaje>=75 && porcentaje<90) {
                 printf("Nivel medio");
            } else {
                if(porcentaje>=50 && porcentaje<75) {
                    printf("Nivel regular");
                } else {
                    printf("Fuera de nivel");
                }
            }
    }

    getch();
    return 0;
}
