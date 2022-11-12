#include<stdio.h>
#include<conio.h>

struct nodo {
    int info;
    struct nodo *sig;
};

//variable global
struct nodo *raiz=NULL;

//FUNCIONES NECESARIAS
void insertar(int x){
    struct nodo *nuevo;
    //reservar espacio para un nuevo elemento
    nuevo=malloc(sizeof(struct nodo));
    //Asignar valor o guardar
    nuevo-> info=x;

    if(raiz==NULL){
        raiz=nuevo;
        nuevo->sig=NULL;
    }else{
        nuevo->sig=raiz;
        raiz=nuevo;
    }
}

//eliminar el ultimo nodo que se inserta
int extraer(){
    if (raiz != NULL){
        int informacion = raiz->info;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        //liberar espacio o borrar
        free(bor);
        return informacion;
    }
    else{
        //lista vacia
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

//Liberar espacio que ocupa la lista de nodos
void liberar() {
    struct nodo *reco = raiz;
    struct nodo *bor;
    while (reco != NULL) {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}

//hasta aqui y el main, el resto son adicionales

int cantidadNodos() {
    struct nodo *reco = raiz;
    int cant=0;
     while (reco != NULL) {
        cant++;
        reco = reco->sig;
    }

    return cant;
}

int vacia() {
    if(raiz==NULL){
        return 1; //vacia
    }else {
        return 0; //No vacia
    }
}

/*Se utiliza int para retornar void no retorna nada se debe imprimir en ese mismo,
en cambio la funcion int o float permite enviarlo e imprimirlo en el main u otro
*/
int informacionPrimerNodo() {
    if (raiz != NULL){
        return raiz-> info;
    }
    else{
        //lista vacia
        return -1;
    }
}

int main() {
    /*if(vacia()==1){
      printf("Lista vacia\n");
    } */
    insertar(10);
    insertar(4);
    insertar(5);
    imprimir();
    /*No muestra porque la lista ya inserto nodos
    if(vacia()==1){
      printf("Lista vacia\n");
    }
    printf("Cantidad de nodos: %i\n", cantidadNodos());
    imprimir();
    printf("Numero a extraer o eliminar: %i\n", extraer());
    imprimir();

    //extraer todos los nodos
    printf("Extraer todos los nodos de la lista\n");
    while(vacia()==0) {
        printf("%i \n", extraer());
    }
    imprimir();
    //Como se borraron anteriormente debe salir el mensaje de lista vacia
    if(vacia()==1){
      printf("Lista vacia\n");
    } */
    printf("El primer nodo de la lista tipo pila es: %i\n", informacionPrimerNodo());
    imprimir();
    liberar();

    getch();
    return 0;
}
