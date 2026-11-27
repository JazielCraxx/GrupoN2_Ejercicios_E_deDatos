// EJERCICIO 61 - DERECK AMADOR - 20241031358
//Implementar pila con arreglo: Crear una estructura de pila usando un arreglo y variables de control.
#include <iostream>

const int MAX_PILA = 100;

struct Pila {
    int datos[MAX_PILA];
    int cima = -1;
};

inline void pilaInicializar(Pila& p) {
    p.cima = -1;
}

inline bool pilaVacia(const Pila& p) {
    return p.cima == -1;
}

inline bool pilaLlena(const Pila& p) {
    return p.cima == MAX_PILA - 1;
}

inline bool pushPila(Pila& p, int valor) {
    if (pilaLlena(p)) return false;
    p.cima++;
    p.datos[p.cima] = valor;
    return true;
}

inline bool popPila(Pila& p, int& valorExtraido) {
    if (pilaVacia(p)) return false;
    valorExtraido = p.datos[p.cima];
    p.cima--;
    return true;
}

inline bool peekCima(const Pila& p, int& valorCima) {
    if (pilaVacia(p)) return false;
    valorCima = p.datos[p.cima];
    return true;
}

inline void mostrarPila(const Pila& p) {
    if (pilaVacia(p)) {
        std::cout << "La pila esta vacia." << std::endl;
        return;
    }
    std::cout << "Elementos en la pila: ";
    for (int i = p.cima; i >= 0; i--) {
        std::cout << p.datos[i] << " ";
    }
    std::cout << std::endl;
}

inline void mostrarMenuPila() {
    Pila miPila;
    pilaInicializar(miPila);

    int opcion = 0;
    int valor = 0;

    do {
        std::cout << "\n--- MENU PILA (EJ 61) ---" << std::endl;
        std::cout << "1. Apilar -------------------- 2. Desapilar" << std::endl;
        std::cout << "3. Elemento en la cima ------- 4. Ver toda la pila" << std::endl;
        std::cout << "0. Volver al menu" << std::endl;
        std::cout << "Opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese el numero a apilar: ";
                std::cin >> valor;
                if (pushPila(miPila, valor)) {
                    std::cout << "Elemento " << valor << " agregado." << std::endl;
                } else {
                    std::cout << "Error: la pila esta llena." << std::endl;
                }
                break;

            case 2:
                if (popPila(miPila, valor)) {
                    std::cout << "Se extrajo: " << valor << std::endl;
                } else {
                    std::cout << "Error: la pila esta vacia." << std::endl;
                }
                break;

            case 3:
                if (peekCima(miPila, valor)) {
                    std::cout << "Cima: " << valor << std::endl;
                } else {
                    std::cout << "La pila esta vacia." << std::endl;
                }
                break;

            case 4:
                mostrarPila(miPila);
                break;

            case 0:
                std::cout << "Saliendo...." << std::endl;
                break;

            default:
                std::cout << "Opcion no valida." << std::endl;
                break;
        }
    } while (opcion != 0);
}