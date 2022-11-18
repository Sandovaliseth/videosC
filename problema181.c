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

int existe(int x){
    struct nodo *reco=raiz;
    while(reco!=NULL){
        if(x==reco->info){
            return 1;
        } else{
            if(x>reco->info){
                reco=reco->der;
            }else{
                reco=reco->izq;
            }
        }
    }
}

void insertar(int x){
    if(!existe(x)){
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
}

int cantidadNodos(struct nodo *reco, int *cant) {
    if(reco!=NULL){
        (*cant)++;
        cantidadNodos(reco->der, cant);
        cantidadNodos(reco->izq, cant);
    }
}

int cantidadHojas(struct nodo *reco, int *cantHojas) {
    if (reco != NULL) {
        if (reco->izq == NULL && reco->der == NULL)
            (*cantHojas)++;
        cantidadHojas(reco->izq,cant);
        cantidadHojas(reco->der,cant);
    }
}

void imprimirEntre(struct nodo *reco){
    if(reco!=NULL){
        imprimirEntre(reco->izq);
        printf("%i ", reco->info);
        imprimirEntre(reco->der);
    }
}

void borrar(struct nodo *reco){
    if(reco!=NULL){
        borrar(reco->izq);
        borrar(reco->der);
        free(reco);
    }
}

void retornarAltura(struct nodo *reco, int nivel,int *altura){
    if (reco != NULL){
        retornarAltura(reco->izq, nivel + 1,altura);
        if (nivel>*altura)
            *altura = nivel;
        retornarAltura(reco->der, nivel + 1,altura);
    }
}

 void mayorValor(){
    if (raiz != NULL){
        struct nodo *reco = raiz;
        while (reco->der != NULL)
            reco = reco->der;
        printf("Mayor valor del arbol:%i\n", reco->info);
    }
}

void borrarMenor(){
     if (raiz != NULL) {
         struct nodo *bor;
         if (raiz->izq == NULL){
             bor = raiz;
             raiz = raiz->der;
             free(bor);
         } else {
             struct nodo *atras = raiz;
             struct nodo *reco = raiz->izq;
             while (reco->izq != NULL){
                 atras = reco;
                 reco = reco->izq;
             }
             atras->izq = reco->der;
             free(reco);
         }
     }
}

int main() {
    int cantidad=0;
    int cantHojas=0;
    insertar(50);
    insertar(25);
    insertar(70);
    insertar(8);
    insertar(30);
    cantidadNodos(raiz, &cantidad);
    printf("La cantidad de los nodos del arbol es: %i\n", cantidad);
    cantidadHojas(raiz, &cantHojas);
    printf("La cantidad de las hojas o nivel del arbol es: %i\n", cantHojas);
    imprimirEntre(raiz);
    borrar(raiz);

    getch();
    return 0;
}
