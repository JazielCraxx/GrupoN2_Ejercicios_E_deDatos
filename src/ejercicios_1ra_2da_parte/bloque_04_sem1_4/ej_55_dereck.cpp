// EJERCICIO 55 - DERECK AMADOR - 20241031358
//Buscar libro por título: Función que busque en el arreglo un libro con un título específico. 
#include "../../../include/operaciones.h"

struct Libros{
    char tituloLibro[100];
    char autor[50];
    int anio;
};

int libroFunc(const Libros listaLibros[], int cantidadLibros, const char libroBuscado[]){
    for (int i = 0; i < cantidadLibros; i++){
        if (compararCadenas(listaLibros[i].tituloLibro, libroBuscado)){
            return i;
        } 
    }
    return -1;
}