#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

//Listas tipo PILA
struct nodo {
    int info;
    struct nodo *sig;
};

struct nodo *raiz=NULL;

void insertar(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo-> info=x;

    if(raiz==NULL){
        raiz=nuevo;
        nuevo->sig=NULL;
    }else{
        nuevo->sig=raiz;
        raiz=nuevo;
    }
}

int extraer(){
    if (raiz != NULL){
        int informacion = raiz->info;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    }
    else{
        return -1;
    }
}

void imprimir() {
    struct nodo *reco=raiz;
    printf("Lista completa:\n");
    while (reco!=NULL) {
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}

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

void cargar(char *formula) {
    printf("Ingrese la formula:");
    gets(formula);
}

int verificarBalanceada(char *formula) {
    //strlen: largo de la formula
    for(int f=0; f<strlen(formula); f++){
        if(formula[f]=='(' || formula[f]=='{' || formula[f]=='[') {
            insertar(formula[f]);
        } else {
            if(formula[f]==')') {
                if(extraer()!='(') {
                    return 0;
                }
            } else {
                if(formula[f]==']') {
                    if(extraer()!='[') {
                        return 0;
                    }
                } else {
                    if (formula[f]=='}') {
                        if(extraer()!='{') {
                            return 0;
                        }
                    }
                }
            }
        }
    }

    if(vacia()){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char formula[101];
    cargar(formula);

    if(verificarBalanceada(formula)){
         printf("La formula esta balanceada");
    } else {
        printf("La formula no esta balanceada");
    }
    liberar();

    getch();
    return 0;
}
