#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct nodo {
    char usuario[51];
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
        printf("%s ",reco->usuario);
        reco=reco->sig;
    }
    printf("\n");
}

void insertar(char *user){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    strcpy(nuevo->usuario,user);
    nuevo->sig=NULL;
    if(raiz==NULL){
        raiz=nuevo;
    }else{
        if(strcmp(user, raiz->usuario)<0){
            nuevo->sig=raiz;
            raiz=nuevo;
        } else{
            struct nodo *reco=raiz;
            struct nodo *atras=raiz;
            while(strcmp(user, reco->usuario)>0 && reco->sig!=NULL){
                atras=reco;
                reco=reco->sig;
            }
            if(strcmp(user, reco->usuario)>0){
                reco->sig=nuevo;
            } else{
                nuevo->sig=reco;
                atras->sig=nuevo;
            }
        }
    }
}

int main(){
    insertar("juan");
    insertar("ana");
    insertar("luis");
    insertar("carlos");
    imprimir();
    liberar();

    getch();
    return 0;
}
