struct nodo {
    int info;
    struct nodo *sig;
};

typedef struct nodo * tnodo;

void insertar(int x);
void imprimir();
int extraer();
void liberar();
