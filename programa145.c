#include<stdio.h>
#include<conio.h>

int main() {
    char c1='A';
    char c2='B';
    char *pe;
    pe=&c1;
    printf("%c\n", c1);
    *pe='a';
    printf("%c\n", c1);
    c1='Z';
    printf("%c\n", *pe);
    pe=&c2;
    printf("%c\n", *pe);

    getch();
    return 0;
}

