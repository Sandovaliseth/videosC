#include<stdio.h>
#include<stdlib.h>

int main(){
    //Creacion del archivo
    FILE *archivo;
    system("cls");

    //Abrir y sobrescribir las lineas
    archivo=fopen("miarchivo.txt", "w");
    /*-Abrir, modificar y añadir datos sin sobreescribir el mensaje
    archivo=fopen("miarchivo.txt", "a");
    -Leer archivo */
    //archivo=fopen("miarchivo.txt", "r");
    //Escribir en el archivo
    fprintf(archivo, "\nsiguiente linea.");
    //Mensaje de confirmacion en la consola
    if(archivo == 'a'){
        printf("Archivo creado con exito");
        printf("\n");
    } else if(archivo == 'a'){
         printf("Archivo modificado");
        printf("\n");
    } else if(archivo == 'r'){
        char c;
        if(archivo!=NULL){
            printf("\n---CONTENIDO---");
            while(1) {
                c=fgetc(archivo);
                if(feof(archivo)){
                    break;
                }
                printf("%c", c);
            }
        }
    } else if(archivo==EOF){
        printf("Algo ha salido mal");
    } else{
        printf("Error al abrir archivo e inexistente");
    }

    //Para terminar siempre usar:
    fclose(archivo);
    printf("\n");
    system("pause");

    return 0;
}
