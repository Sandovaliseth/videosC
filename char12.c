#include<stdio.h>
#include<conio.h>

int main() {

    char palabra[40];
    int count=0, x=0;

    printf("Ingrese la palabra en minuscula: ");
    gets(palabra);

    while(palabra[x]!='\0') {
        if(palabra[x]=='a' || palabra[x]=='e' || palabra[x]=='i' || palabra[x]=='o' || palabra[x]=='u') {
            palabra[x]='-';
        }
        x++;
    }

    printf("La palabra modificada es: %s", palabra);

    getch();
    return 0;
}
