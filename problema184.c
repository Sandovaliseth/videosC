#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Bytes requeridos para tipo char: %i\n",sizeof(char));
    printf("Bytes requeridos para tipo short int: %i\n",sizeof(short int));
    printf("Bytes requeridos para tipo int: %i\n",sizeof(int));
    printf("Bytes requeridos para tipo lont int: %i\n",sizeof(long int));
    printf("Bytes requeridos para tipo long long int: %i\n",sizeof(long long int));
    getch();
    return 0;
}
