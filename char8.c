#include<stdio.h>
#include<conio.h>

int main() {

    char palabra[30];
    int count=0, x=0;

    printf("Ingrese la palabra en minuscula: ");
    gets(palabra);

    while(palabra[x]!='\0') {
        if(palabra[x]=='a' || palabra[x]=='e' || palabra[x]=='i' || palabra[x]=='o' || palabra[x]=='u') {
            count++;
        }
        x++;
    }

    printf("La cantidad de vocales en la palabra %s es de: %i", palabra, count);

    getch();
    return 0;
}
