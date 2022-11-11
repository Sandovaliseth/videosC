#include<stdio.h>
#include<conio.h>

struct pais{
    char nombre[40];
    int cantidadhab;
};

void imprimir(struct pais p){
    printf("Pais: %s - Poblacion o habitantes: %i\n", p.nombre, p.cantidadhab);
}

int main() {
    struct pais pais1={"Argentina", 40000000};
    struct pais pais2={"Chile", 17000000};
    struct pais pais3={"Brasil", 30000000};
    imprimir(pais1);
    imprimir(pais2);
    imprimir(pais3);

    getch();
    return 0;
}
