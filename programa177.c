#include<stdio.h>
#include<conio.h>

int factorial(int x){
    if(x>0){
        int fac= x*factorial(x-1);
        return fac;
    } else{
    return 1;
    }
}

int main(){
    int n;
    printf("Ingrese el numero a evaluar: ");
    scanf("%i", &n);
    printf("El factorial de %i es %i ", n, factorial(n));
    getch();
    return 0;
}
