#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo {
    int info;
    struct nodo *izq, *der;
};

struct nodo *raiz=NULL;

int vacia() {
    if(raiz==NULL){
        return 1;
    }else {
        return 0;
    }
}

void insertar(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo->info=x;
    nuevo->izq=NULL;
    nuevo->der=NULL;
    if(vacia()){
        raiz=nuevo;
    }else{
        struct nodo *anterior, *reco;
        reco=raiz;
        while(reco!=NULL){
            anterior=reco;
            if(x<reco->info){
                reco=reco->izq;
            } else{
                reco=reco->der;
            }
        }
        if(x<anterior->info){
            anterior->izq=nuevo;
        } else{
            anterior->der=nuevo;
        }
    }
}

void imprimirPre(struct nodo *reco){
    if(reco!=NULL){
        printf("%i ", reco->info);
        imprimirPre(reco->izq);
        imprimirPre(reco->der);
    }
}

void imprimirEntre(struct nodo *reco){
    if(reco!=NULL){
        imprimirEntre(reco->izq);
        printf("%i ", reco->info);
        imprimirEntre(reco->der);
    }
}

void imprimirPost(struct nodo *reco){
    if(reco!=NULL){
        imprimirPost(reco->izq);
        imprimirPost(reco->der);
        printf("%i ", reco->info);
    }
}

void borrar(struct nodo *reco){
    if(reco!=NULL){
        borrar(reco->izq);
        borrar(reco->der);
        free(reco);
    }
}

int main() {
    insertar(50);
    insertar(25);
    insertar(70);
    insertar(8);
    insertar(30);
    printf("Lista preOrden\n");
    imprimirPre(raiz);
    printf("\nLista entreOrden\n");
    imprimirEntre(raiz);
    printf("\nLista postOrden\n");
    imprimirPost(raiz);
    borrar(raiz);

    getch();
    return 0;
}
