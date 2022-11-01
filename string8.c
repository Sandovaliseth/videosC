#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

    char nombre1[31];
    char nombre2[31];
    char nombre3[31];
    char total[31];
    printf("Ingrese el primer nombre: ");
    gets(nombre1);
    printf("Ingrese el segundo nombre: ");
    gets(nombre2);
    printf("Ingrese el tercer nombre: ");
    gets(nombre3);

     if(strcmp(nombre1, nombre2)<0 && strcmp(nombre1, nombre3)<0) {
        strcpy(total, nombre1);
        strcat(total, ",");
        if(strcmp(nombre2, nombre3)<0){
            strcat(total, nombre2);
            strcat(total, ",");
            strcat(total, nombre3);
        } else {
            strcat(total, nombre3);
            strcat(total, ",");
            strcat(total, nombre2);
        }
    } else {
        if(strcmp(nombre2, nombre3)<0) {
            strcat(total, nombre2);
            strcat(total, ",");
            if(strcmp(nombre1, nombre3)<0){
                strcat(total, nombre1);
                strcat(total, ",");
                strcat(total, nombre3);
            } else {
                strcat(total, nombre3);
                strcat(total, ",");
                strcat(total, nombre1);
            }
        } else {
            strcat(total, nombre3);
            strcat(total, ",");
            if(strcmp(nombre1, nombre2)<0){
                strcat(total, nombre1);
                strcat(total, ",");
                strcat(total, nombre2);
            } else {
                strcat(total, nombre2);
                strcat(total, ",");
                strcat(total, nombre1);
            }
        }
    }

    printf("Los nombres ordenados son: %s", total);

    getch();
    return 0;
}
