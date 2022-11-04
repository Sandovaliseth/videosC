#include<stdio.h>
#include<conio.h>

int main() {

    char palabra[40];
    cargar(palabra);
    printf("La cantidad de vocales en la palabra %s es de %i", palabra, cantidadVocales(palabra));

    getch();
    return 0;
}

void cargar(char p[40]){
    printf("Ingrese una palabra: ");
    gets(p);
}

int cantidadVocales(char p[40]){
    int cant=0;
    int x=0;

    while(p[x]!='\0'){
        if(p[x]=='a' || p[x]=='e' || p[x]=='i' || p[x]=='o' || p[x]=='u'
            || p[x]=='A' || p[x]=='E' || p[x]=='I' || p[x]=='O' || p[x]=='U') {
            cant++;
        }
        x++;
    }
    return cant;
}

