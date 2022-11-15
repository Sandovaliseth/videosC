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

void insertarPrimerNodo(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo-> info=x;
    nuevo->sig=raiz;
    raiz=nuevo;
}

void insertarUltimoNodo(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo-> info=x;
    nuevo->sig=NULL;
    if(raiz==NULL){
       raiz=nuevo;
    } else{
        struct nodo *reco=raiz;
        while(reco->sig!=NULL){
            reco=reco->sig;
        }
        reco->sig=nuevo;
    }
}

void insertarSegundo(int x){
    if(raiz!=NULL){
        struct nodo *nuevo;
        nuevo=malloc(sizeof(struct nodo));
        nuevo-> info=x;
        if(raiz->sig=NULL){
            raiz->sig=nuevo;
            nuevo->sig=NULL;
        } else {
            nuevo->sig=NULL;
            raiz->sig=nuevo;
        }
    }
}

void insertarAntepenultimo(int x){
    if(raiz!=NULL){
        struct nodo *nuevo;
        nuevo=malloc(sizeof(struct nodo));
        nuevo->info=x;
        if(raiz->sig==NULL){
            nuevo->sig=raiz;
            raiz=nuevo;
        } else {
            struct nodo *anterior=raiz;
            struct nodo *reco=raiz->sig;
            while(reco->sig!=NULL){
                anterior=reco;
                reco=reco->sig;
            }
            nuevo->sig=anterior->sig;
            anterior->sig=nuevo;
        }
    }
}

void borrarPrimero(){
    if(raiz!=NULL){
        struct nodo *bor=raiz;
        raiz=raiz->sig;
        free(bor);
    }
}

void borrarSegundo(){
    if(raiz!=NULL){
        if(raiz->sig!=NULL){
            struct nodo *bor=raiz->sig;
            struct nodo *tercero=raiz->sig;
            tercero=tercero->sig;
            raiz->sig=tercero;
            free(bor);
        }
    }
}

void borrarUltimo(){
    if(raiz!=NULL){
        if(raiz->sig==NULL){
            free(raiz);
            raiz=NULL;
        } else{
            struct nodo *bor=raiz->sig;
            struct nodo *anterior=raiz;
            while(bor->sig!=NULL){
                anterior=bor;
                bor=bor->sig;
            }
            anterior->sig=NULL;
            free(bor);
        }
    }
}

void borrarMayor(){
    if(raiz!=NULL){
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
        struct nodo *anterior=raiz;
        while(reco!=NULL){
            if(reco->info==may){
                if(reco==raiz){
                    bor=raiz;
                    raiz=raiz->sig;
                    anterior=raiz;
                    bor=raiz;
                    free(bor);
                } else{
                    anterior->sig=reco->sig;
                    bor=reco;
                    reco=reco->sig;
                    free(bor);
                }
            } else{
                anterior=reco;
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
    insertarPrimerNodo(10);
    insertarSegundo(500);
    insertarUltimoNodo(200);
    insertarAntepenultimo(70);
    imprimir();
    //borrarPrimero();
    //borrarSegundo();
    //borrarUltimo();
    borrarMayor();
    imprimir();
    liberar();

    getch();
    return 0;
}
