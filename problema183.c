#include <stdio.h>
#include<conio.h>
#include <limits.h>

int main() {

   printf("El minimo valor para un signed char = %i\n", SCHAR_MIN);
   printf("El maximo valor para un signed char = %i\n", SCHAR_MAX);
   printf("El maximo valor para un unsigned char = %i\n\n", UCHAR_MAX);

   printf("El minimo valor para un signed short int = %i\n", SHRT_MIN);
   printf("El maximo valor para un signed short int = %i\n", SHRT_MAX);
   printf("El maximo valor para un unsigned short int = %i\n\n", USHRT_MAX);

   printf("El minimo valor para un signed int = %i\n", INT_MIN);
   printf("El maximo valor para un signed int = %i\n", INT_MAX);
   printf("El maximo valor para un unsigned int = %u\n\n", UINT_MAX);

   printf("El minimo valor para un signed long int = %li\n", LONG_MIN);
   printf("El maximo valor para un signed long int = %li\n", LONG_MAX);
   printf("El maximo valor para un unsigned long int = %lu\n\n", ULONG_MAX);

   printf("El minimo valor para un signed long long int = %lli\n", LONG_LONG_MIN);
   printf("El maximo valor para un signed long long int = %lli\n", LONG_LONG_MAX);
   printf("El maximo valor para un unsigned long long int = %llu\n\n", ULONG_LONG_MAX);

   getch();
   return 0;
}
