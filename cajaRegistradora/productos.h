typedef struct {
    int id;
    char nombre[41];
    float precio;
    int cantidad;
} producto;

typedef struct {
    int dd;
    int mm;
    int aa;
} fecha;

typedef struct {
    int id;
    fecha fechaRegistro;
    char nombreC[41];
    producto productos;
} venta;

venta registrar();
void imprimirVentas(int cont, venta v[cont]);
inventario();
