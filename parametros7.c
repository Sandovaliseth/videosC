#include<stdio.h>
#include<conio.h>

int main() {

    /*char letra;
    printf("Ingrese un caracter: ");
    scanf(" %c", &letra);
    validarVocales(letra); */
    char c;
    for(c='A'; c<='z'; c++) {
        validarVocales(c);
    }

    getch();
    return 0;
}

void validarVocales(char letra) {

    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'
       || letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U') {
        printf("El caracter %c es una vocal \n", letra);
    } else {
        printf("El caracter %c NO es una vocal \n", letra);
    }
}
