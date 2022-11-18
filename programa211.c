#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo {
    int info;
    struct nodo *sig;
};

typedef struct nodo * tnodo;

tnodo raiz=NULL;

void insertar(int x){
    tnodo nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = x;
    if (raiz == NULL){
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else{
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void imprimir(){
    tnodo reco=raiz;
    printf("Lista completa.\n");
    while (reco!=NULL){
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}

int extraer(){
    if (raiz != NULL){
        int informacion = raiz->info;
        tnodo bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    }
    else{
        return -1;
    }
}

void liberar(){
    tnodo reco = raiz;
    tnodo bor;
    while (reco != NULL){
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}

int main(){
    insertar(10);
    insertar(60);
    insertar(120);
    imprimir();
    printf("Extraemos de la pila:%i\n",extraer());
    imprimir();
    liberar();
    getch();
    return 0;
}

