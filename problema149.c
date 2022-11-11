#include<stdio.h>
#include<conio.h>

void incrementar(int *pe){
    *pe=*pe+1;
}

int main() {
    int x=0;
    printf("%i\n",x);
    incrementar(&x);
    printf("%i\n",x);
    incrementar(&x);
    printf("%i\n",x);
    incrementar(&x);
    printf("%i\n",x);
    int z=10;
    printf("%i\n",z);
    incrementar(&z);
    printf("%i\n",z);

    getch();
    return 0;
}
