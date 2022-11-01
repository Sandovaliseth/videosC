#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {

    char usuario[31];
    char clave[31];
    char nombreCompleto[62];
    printf("Ingrese el nombre de usuario: ");
    gets(usuario);
    printf("Ingrese la clave del usuario: ");
    gets(clave);

    if(strcmp(clave, "abc123")==0) {
         printf("Clave ingresada correcta");
    } else {
        printf("La clave ingresada no es correcta");
    }

    getch();
    return 0;
}
