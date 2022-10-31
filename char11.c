#include<stdio.h>
#include<conio.h>

int main() {

    char palabra[21];

    printf("Ingrese una palabra: ");
    gets(palabra);

    if(palabra[0]=='A' || palabra[0]=='a') {
        printf("La palabra comienza con la vocal A o a");
    }else {
        printf("La palabra no comienza con la vocal A o a");
    }

    getch();
    return 0;
}
