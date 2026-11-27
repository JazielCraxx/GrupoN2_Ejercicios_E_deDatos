// EJERCICIO 74 - DERECK AMADOR - 20241031358
//Imprimir cola en orden inverso: Usar una pila auxiliar para invertir y mostrar los elementos de la cola.
#include "../../../include/operaciones.h"
void imprimirColaInversa(const Cola& c) {

    if (colaVacia(c)) {
        cout << "La cola esta vacia." << endl;
        return;
    }
    Cola copia = c;
    Pila pilaAux;
    pilaInicializar(pilaAux);
    int dato;

    while (dequeue(copia, dato)) {
        pushPila(pilaAux, dato);
    }

    while (popPila(pilaAux, dato)) {
        cout << dato << " ";
    }   
    cout << endl;
}