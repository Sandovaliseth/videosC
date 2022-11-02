#include<stdio.h>
#include<conio.h>

void main() {

    char persona='h';
    validarGenero(persona);

    getch();
    return 0;
}

void validarGenero(char sexo) {
    if(sexo=='h') {
        printf("Hombre");
    }else if(sexo=='m'){
        printf("Mujer");
    }

}
