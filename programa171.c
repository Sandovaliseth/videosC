#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo {
    int info;
    struct nodo *sig;
    struct nodo *ant;
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

void insertarPrimerNodo(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo-> info=x;
    nuevo->ant=NULL;
    nuevo->sig=raiz;
    if(raiz!=NULL){
       raiz->ant=nuevo;
    }
    raiz=nuevo;
}

void insertarUltimoNodo(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo-> info=x;
    nuevo->ant=NULL;
    nuevo->sig=NULL;
    if(raiz==NULL){
       raiz=nuevo;
    } else{
        struct nodo *reco=raiz;
        while(reco->sig!=NULL){
            reco=reco->sig;
        }
        reco->sig=nuevo;
        nuevo->ant=reco;
    }
}

void insertarSegundo(int x){
    if(!vacia()){
        struct nodo *nuevo;
        nuevo=malloc(sizeof(struct nodo));
        nuevo->info=x;
        nuevo->ant=NULL;
        nuevo->sig=NULL;
        if(raiz->sig==NULL){
            raiz->sig=nuevo;
            nuevo->ant=raiz;
        } else {
            struct nodo *segundo=raiz->sig;
            nuevo->sig=segundo;
            nuevo->ant=raiz;
            raiz->sig=nuevo;
            segundo->ant=nuevo;
        }
    }
}

void insertarAntepenultimo(int x){
    if(!vacia()){
        struct nodo *nuevo;
        nuevo=malloc(sizeof(struct nodo));
        nuevo->info=x;
        nuevo->ant=NULL;
        nuevo->sig=NULL;
        if(raiz->sig==NULL){
            nuevo->sig=raiz;
            raiz->ant=nuevo;
            raiz=nuevo;
        } else {
            struct nodo *reco=raiz;
            while(reco->sig!=NULL){
                reco=reco->sig;
            }
            struct nodo *antep=reco->ant;
            antep->sig=nuevo;
            nuevo->ant=antep;
            nuevo->sig=reco;
            reco->ant=nuevo;
        }
    }
}

void borrarPrimero(){
    if(raiz!=NULL){
        struct nodo *bor=raiz;
        raiz=raiz->sig;
        if(raiz!=NULL){
            raiz->ant=NULL;
        }
        free(bor);
    }
}

void borrarSegundo(){
    if(!vacia()){
        if(raiz->sig!=NULL){
            struct nodo *bor=raiz->sig;
            struct nodo *tercero=raiz->sig;
            tercero=tercero->sig;
            raiz->sig=tercero;
                if(tercero!=NULL){
                    tercero->ant=raiz;
                }
            free(bor);
        }
    }
}

void borrarUltimo(){
    if(!vacia()){
        if(raiz->sig==NULL){
            free(raiz);
            raiz=NULL;
        } else{
            struct nodo *bor=raiz->sig;
            while(bor->sig!=NULL){
                bor=bor->sig;
            }
            struct nodo *anterior=bor->ant;
            anterior->sig=NULL;
            free(bor);
        }
    }
}

void borrarMayor(){
    if(!vacia()){
        int may=raiz->info;
        struct nodo *reco=raiz;
        while(reco!=NULL){
            if(reco->info>may){
                may=reco->info;
            }
            reco=reco->sig;
        }
        reco=raiz;
        struct nodo *bor;
        while(reco!=NULL){
            if(reco->info==may){
                if(reco==raiz){
                    bor=raiz;
                    raiz=raiz->sig;
                    if(raiz!=NULL){
                        raiz->ant=NULL;
                    }
                    free(bor);
                    return;
                } else{
                    if(reco->sig==NULL){
                        bor=reco;
                        reco=reco->ant;
                        reco->sig=NULL;
                        free(bor);
                    } else {
                        struct nodo *anterior=reco->ant;
                        bor=reco;
                        reco=reco->sig;
                        anterior->sig=reco;
                        reco->ant=anterior;
                        free(bor);
                        return;
                    }
                }
            } else{
                reco=reco->sig;
            }
        }
    }
}

void imprimir() {
    struct nodo *reco=raiz;
    printf("Listado completo:\n");
    while (reco!=NULL) {
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}

int vacia() {
    if(raiz==NULL){
        return 1;
    }else {
        return 0;
    }
}

int main() {
    insertarPrimerNodo(20);
    insertarPrimerNodo(70);
    insertarPrimerNodo(5);
    insertarUltimoNodo(1);
    insertarSegundo(9);
    insertarAntepenultimo(1000);
    imprimir();
    borrarPrimero();
    imprimir();
    borrarSegundo();
    imprimir();
    borrarUltimo();
    imprimir();
    borrarMayor();
    imprimir();
    liberar();

    getch();
    return 0;
}
