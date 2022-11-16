#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo {
    int info;
    struct nodo *sig;
};

struct nodo *raiz=NULL;

void liberar() {
    struct nodo *reco = raiz;
    struct nodo *bor;
    while (reco != NULL) {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}

void insertar(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    nuevo->sig=raiz;
    raiz=nuevo;
}

int vacia() {
    if(raiz==NULL){
        return 1;
    }else {
        return 0;
    }
}

int cantidad() {
    struct nodo *reco = raiz;
    int cant=0;
     while (reco != NULL) {
        cant++;
        reco = reco->sig;
    }

    return cant;
}

void imprimir() {
    struct nodo *reco=raiz;
    printf("Listado:\n");
    while (reco!=NULL) {
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}

void imprimirInverso(struct nodo *reco) {
    if(reco!=NULL){
        imprimirInverso(reco->sig);
        printf("%i ",reco->info);
    }
}

int main() {
    insertar(10);
    insertar(4);
    insertar(5);
    imprimir();
    printf("Listado inverso:\n");
    imprimirInverso(raiz);
    liberar();

    getch();
    return 0;
}
