#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Para hacer uso de rand
#include<time.h>

struct nodo {
    int info;
    struct nodo *sig;
};

struct nodo *raiz=NULL;
struct nodo *fondo=NULL;

void insertar(int x){
    struct nodo *nuevo;
    nuevo=malloc(sizeof(struct nodo));
    nuevo-> info=x;
    nuevo-> sig=NULL;

    if(vacia()){
        raiz=nuevo;
        fondo=nuevo;
    }else{
        fondo->sig=nuevo;
        fondo=nuevo;
    }
}

int extraer(){
    if (!vacia()){
        int informacion = raiz->info;
        struct nodo *bor = raiz;
        if(raiz==fondo){
            raiz= NULL;
            fondo= NULL;
        } else {
            raiz = raiz->sig;
        }
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

int cantidad(){
    struct nodo *reco = raiz;
    int cant=0;
    while(reco!=NULL){
        cant++;
        reco=reco->sig;
    }
    return cant;
}

void simulacion() {
    srand(time(NULL));
    int estado=0;       //0=desocupado, 1=ocupado
    int llegada=rand()%2+2;
    int salida=-1;
    int cantAtendidas=0;
    for(int min=0; min<600; min++) {
        if(llegada==min){
            if(estado==0) {
                estado=1;
                salida=min+2+rand()%3;
            } else{
                insertar(min);
            }
            llegada=min+2+rand()%2;
        }
        if(salida==min) {
            estado=0;
            cantAtendidas++;
            if(!vacia()){
                extraer();
                estado=1;
                salida=min+2+rand()%3;
            }
        }
    }
    printf("Total de atendidos: %i\n", cantAtendidas);
    printf("Total en cola: %i\n", cantidad());
    printf("Hora de llegada del primer cliente: %i", extraer());
}

int main() {
    simulacion();
    liberar();

    getch();
    return 0;
}

