#include<stdio.h>
#include<conio.h>

int main()
{
    signed char c1=65;
    printf("c1 es de tipo signed char:%c \n",c1);
    unsigned char c2=160;
    printf("c2 es de tipo unsigned char:%c \n",c2);
    signed short int e1=32000;
    printf("e1 es de tipo short int:%i \n",e1);
    unsigned short int e2=64000;
    printf("e2 es de tipo unsigned short int:%i \n",e2);
    signed int e3=-2147483648;
    printf("e3 es de tipo signed int:%i \n",e3);
    unsigned int e4=4294967295;
    printf("e4 es de tipo unsigned int:%u \n",e4);
    signed long int e5=-2147483648;
    printf("e5 es de tipo signed long int:%li \n",e5);
    unsigned long int e6=2147483647;
    printf("e6 es de tipo unsigned long int:%lu \n",e6);
    signed long long int e7=-9223372036854775807;
    printf("e7 es de tipo signed long long int:%lli \n",e7);
    unsigned long long int e8=18446744073709551615;
    printf("e8 es de tipo unsigned long long int:%llu \n",e8);
    getch();
    return 0;
}
