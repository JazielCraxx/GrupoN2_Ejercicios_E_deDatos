// EJERCICIO 70 - DERECK AMADOR - 20241031358
//Función dequeue para cola: Eliminar y retornar el elemento del frente de la cola (validar si está vacía).
#include "../../../include/operaciones.h"
const int MAX_COLA = 100;

struct Cola {
    int datos[MAX_COLA];
    int frente = 0;
    int final = -1;
};

void colaInicializar(Cola& c) {
    c.frente = 0;
    c.final = -1;
}

bool colaVacia(const Cola& c) {
    return c.frente > c.final;
}

bool colaLlena(const Cola& c) {
    return c.final == MAX_COLA - 1;
}

bool enqueue(Cola& c, int valor) {
    if (colaLlena(c)) return false;

    c.final++;
    c.datos[c.final] = valor;

    return true;
}

bool dequeue(Cola& c, int& valorExtraido) {
    if (colaVacia(c)) return false;
    valorExtraido = c.datos[c.frente];
    c.frente++;
    if (c.frente > c.final) {
        c.frente = 0;
        c.final = -1;
    }

    return true;
}