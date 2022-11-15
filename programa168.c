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
    nuevo->sig=NULL;
    if(raiz==NULL){
        raiz=nuevo;
    }else{
        if(x<raiz->info){
            nuevo->sig=raiz;
            raiz=nuevo;
        } else {
            struct nodo *reco=raiz;
            struct nodo *atras=raiz;
            while(x>=reco->info && reco->sig!=NULL){
                atras=reco;
                reco=reco->sig;
            } if(x>=reco->info){
                reco->sig=nuevo;
            } else{
                nuevo->sig=reco;
                atras->sig=nuevo;
            }
        }
    }
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
    printf("Listado completo:\n");
    while (reco!=NULL) {
        printf("%i ",reco->info);
        reco=reco->sig;
    }
}

int main() {
    insertar(10);
    insertar(5);
    insertar(7);
    insertar(50);
    imprimir();
    liberar();

    getch();
    return 0;
}
