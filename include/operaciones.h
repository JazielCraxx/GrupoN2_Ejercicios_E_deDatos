#pragma once
// DERECK AMADOR - EJ 06
    const double Pi = 3.1416;  
    double perimetroFunc(double rdio){
        return 2 * Pi * rdio;;
    };

//DERECK AMADOR - EJ 09
     unsigned long long factorialFunc(int num_fact, unsigned long long resultado){
        for (int i = 1; i <= num_fact; i++){
            resultado = resultado*i;
        }
        return resultado;
    }; 

//DERECK AMADOR - EJ 18
    int arrMaxFunc(const int ArrMaxVal[], int tam) {
        int max = ArrMaxVal[0];
        for (int i = 1; i < tam; i++) {
            if (ArrMaxVal[i] > max) {
                max = ArrMaxVal[i];
            }   
        }
    return max;
    };

//DERECK AMAMDOR - EJ 19
    int arrMinFunc(const int ArrMinVal[], int tam) {
        int min = ArrMinVal[0];
        for (int i = 1; i < tam; i++) {
            if (ArrMinVal[i] < min) {
                min = ArrMinVal[i];
            }
        }
    return min;
};

//DERECK AMADOR - EJ 21
int buscarElem(const int arrBuscar[], int tam, int buscado){   
    for (int i = 0; i < tam; i++){
        if (arrBuscar[i] == buscado){ return i;} 
    } return -1;
};

//DERECK AMADOR - EJ 22
int contarElem(const int arrContarElem[], int tam, int buscado){
    int contador{0};
    for (int i = 0; i < tam; i++){
        if (arrContarElem[i] == buscado){
            contador++;
        }
    } return contador;
};

//DERECK AMADOR - EJ 27
int const max_col = 5;
int sumarColumna(const int matriz[][max_col], int fila, int columna){
    int suma = 0;
    for (int i = 0; i < fila; i++){
       suma+= matriz[i][columna];
    }
    return suma;
};

//DERECK AMADOR - EJ 29
void minimoValColumna(int const matriz[][max_col], int fila, int columna, int minColumna[]){
    for (int j = 0; j < columna; j++){
        int valMinimo = matriz[0][j];
        for (int i = 1; i < fila; i++){
            if (matriz[i][j] < valMinimo){
                valMinimo = matriz[i][j];
            }
        }
        minColumna[j] = valMinimo;
    }
};

//DERECK AMADOR - EJ 34
void ordenarDesc(int arreglo[], int tam){
    for (int i = 0; i < tam; i++){
        int posMayor = i;
        for (int j = i + 1; j < tam; j++){
            if (arreglo[j] > arreglo[posMayor]){
                posMayor = j;
            }
        }
        if (posMayor != i){
            int temporal = arreglo[i];
            arreglo[i] = arreglo[posMayor];
            arreglo[posMayor] = temporal;
        }
    }
};

//DERECK AMADOR - EJ 39
bool compararCadenas(const char carac1[], const char carac2[]){
    int i{0};
    while (carac1[i] != '\0' && carac2[i] != '\0'){
        if (carac1[i] != carac2[i]){
            return false;
        }
        i++;
    }
    return carac1[i] == carac2[i];
};

//DERECK AMADOR - EJ 42
void invertirCadena(const char cadenaOriginal[], char cadenaInvertida[]){
    int longitud{0};
    while (cadenaOriginal[longitud] != '\0'){
        longitud++;
    }
    for (int i = 0; i < longitud; i++){
        cadenaInvertida[i] = cadenaOriginal[longitud - 1 - i];
    }
    cadenaInvertida[longitud] = '\0';
};

//DERECK AMADOR - EJ 45
bool verificarPalindromo(const char cadena[]){
    int longitud{0};
    while (cadena[longitud] != '\0'){
        longitud++;
    }
    int inicio{0}, final = longitud -1;

    while (inicio < final){
        if (cadena[inicio] != cadena[final]){
            return false;
        }
        inicio++;
        final--; 
    } 
    return true;
};

//DERECK AMDOR - EJ 49
double promedioNotas(const double notas[], int cantidad) {
    double suma{0.0};
    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    return suma / cantidad;
};

//DERECK AMADOR - EJ 55
        //STRUCT EJ 55
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
};

//DERECK AMADOR - EJ 58
struct Fraccion{
    int numerador, denominador;
};

Fraccion sumaD2Fracciones(const Fraccion& fracc1, const Fraccion& fracc2){
    Fraccion resultado;
    if (fracc1.denominador == 0 || fracc2.denominador == 0) { return {0, 1}; }
    resultado.numerador = (fracc1.numerador * fracc2.denominador) + (fracc2.numerador * fracc1.denominador);
    resultado.denominador = fracc1.denominador * fracc2.denominador;
    int a = resultado.numerador;
    int b = resultado.denominador;
    if (a < 0){
        a = -a;
    } 
    if (b < 0){
        b = -b;
    }
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    resultado.numerador /= a;
    resultado.denominador /= a;
    if (resultado.denominador < 0){
        resultado.numerador *= -1;
        resultado.denominador *= -1;
    }
    return resultado;
};

//DERECK AMADOR - EJ 61
#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>
using namespace std;

const int MAX_PILA = 100;

struct Pila {
    int datos[MAX_PILA];
    int cima = -1;
};

void pilaInicializar(Pila& p) {
    p.cima = -1;
};

bool pilaVacia(const Pila& p) {
    return p.cima == -1;
};

bool pilaLlena(const Pila& p) {
    return p.cima == MAX_PILA - 1;
};

bool pushPila(Pila& p, int valor) {
    if (pilaLlena(p)) return false;
    p.cima++;
    p.datos[p.cima] = valor;
    return true;
};

bool popPila(Pila& p, int& valorExtraido) {
    if (pilaVacia(p)) return false;
    valorExtraido = p.datos[p.cima];
    p.cima--;
    return true;
};

bool peekCima(const Pila& p, int& valorCima) {
    if (pilaVacia(p)) return false;
    valorCima = p.datos[p.cima];
    return true;
};

void mostrarPila(const Pila& p) {
    if (pilaVacia(p)) {
        cout << "La pila esta vacia." << endl;
        return;
    }
    cout << "Elementos en la pila: ";
    for (int i = p.cima; i >= 0; i--) {
        cout << p.datos[i] << " ";
    }
    cout << endl;
};
//-----------------MOSTAR MENU PILA EJ 61-------------------------
void mostrarMenuPila() {
    Pila miPila;
    pilaInicializar(miPila);

    int opcion = 0;
    int valor = 0;

    do {
        cout << "Ejercicio 61." << endl;
        cout << "Implementar pila con arreglo. Seleccione una opción del menú." << endl;
        cout << "1. Apilar -------------------- 2. Desapilar" << endl;
        cout << "3. Elemento en la cima ------- 4. Ver toda la pila" << endl;
        cout << "0. Volver al menu" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el numero a apilar: ";
                cin >> valor;
                if (pushPila(miPila, valor)) {
                    cout << "Elemento " << valor << " agregado." << endl;
                } else {
                    cout << "Error: la pila esta llena." << endl;
                }
                break;

            case 2:
                if (popPila(miPila, valor)) {
                    cout << "Se extrajo: " << valor << endl;
                } else {
                    cout << "Error: la pila esta vacia." << endl;
                }
                break;

            case 3:
                if (peekCima(miPila, valor)) {
                    cout << "Cima: " << valor << endl;
                } else {
                    cout << "La pila esta vacia." << endl;
                }
                break;

            case 4:
                mostrarPila(miPila);
                break;

            case 0:
                cout << "Saliendo...." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
                break;
        }
    } while (opcion != 0);
};

#endif

// DERECK AMADOR - EJ 66
bool expresionBalanc(const char expresion[]) {
    Pila p;
    pilaInicializar(p);
    int i = 0;
    while (expresion[i] != '\0') {
        if (expresion[i] == '(' || expresion[i] == '[' || expresion[i] == '{') {
            pushPila(p, expresion[i]);
        } else if (expresion[i] == ')' || expresion[i] == ']' || expresion[i] == '}') {
            if (pilaVacia(p)) {
                return false;
            }
            int apertura;
            popPila(p, apertura);
            if ((expresion[i] == ')' && apertura != '(') || (expresion[i] == ']' && apertura != '[') ||
                (expresion[i] == '}' && apertura != '{')) {
                return false;
            }
        }
        i++;
    }
    return pilaVacia(p);
};

//DERECK AMADOR - EJ 70
const int MAX_COLA = 100;

struct Cola {
    int datos[MAX_COLA];
    int frente = 0;
    int final = -1;
};

void colaInicializar(Cola& c) {
    c.frente = 0;
    c.final = -1;
};

bool colaVacia(const Cola& c) {
    return c.frente > c.final;
};

bool colaLlena(const Cola& c) {
    return c.final == MAX_COLA - 1;
};

bool enqueue(Cola& c, int valor) {
    if (colaLlena(c)) return false;

    c.final++;
    c.datos[c.final] = valor;

    return true;
};

bool dequeue(Cola& c, int& valorExtraido) {
    if (colaVacia(c)) return false;
    valorExtraido = c.datos[c.frente];
    c.frente++;
    if (c.frente > c.final) {
        c.frente = 0;
        c.final = -1;
    }

    return true;
};

//DERECK AMADOR - EJ 77
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
};
//-----------------MOSTAR MENU COLA EJ 70 Y 74-------------------------
void mostrarMenuCola() {
    Cola c;
    colaInicializar(c);

    int opcion = -1;
    int valor = 0;

    do {
        cout << "Menú cola. Seleccione una opcion para avanzar." << endl;
        cout << "1. Encolar -------------------- 2. Desencolar" << endl;
        cout << "3. Consultar frente y estado -- 4. Mostrar cola completa" << endl;
        cout << "5. Llenar cola al maximo ------ 6. Reiniciar cola" << endl;
        cout << "7. Imprimir cola en orden inverso (Ej. 74)" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        if (!(cin >> opcion)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada invalida. Ingrese un numero del 0 al 6." << endl;
            opcion = -1;
            continue;
        }

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor entero a encolar: ";
                if (!(cin >> valor)) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Error: Debe ingresar un numero entero." << endl;
                    break;
                }
                if (enqueue(c, valor)) {
                    cout << "Se agrego correctamente en la cola." << valor
                         << "En la posicion [" << c.final << "]." << endl;
                } else {
                    cout << "Error, La cola esta llena (MAX = "<< MAX_COLA << ")." << endl;
                }
                break;
            case 2:
                if (dequeue(c, valor)) {
                    cout << "Elemento extraido del frente = " << valor << endl;
                    if (colaVacia(c)) {
                        cout << "La cola quedo completamente vacía." << endl;
                    }
                } else {
                    cout << "La cola ya está vacia, no hay nada que vaciar." << endl;
                }
                break;

            case 3:
                cout << "ESTADO DE LA COLA:" << endl;
                cout << "Indice frente  : " << c.frente << endl;
                cout << "Indice final   : " << c.final << endl;
                cout << "¿Esta vacia?    : " << (colaVacia(c) ? "Si" : "No") << endl;
                cout << "¿Esta llena?    : " << (colaLlena(c) ? "Si" : "No") << endl;
                if (!colaVacia(c)) {
                    cout << "Valor de frente: " << c.datos[c.frente] << endl;
                    cout << "Total elementos: " << (c.final - c.frente + 1) << endl;
                }
                break;

            case 4:
                if (colaVacia(c)) {
                    cout << "La cola esta vacia []." << endl;
                } else {
                    cout << "Cola (frente -> final): ";
                    for (int i = c.frente; i <= c.final; i++) {
                        cout << "[" << c.datos[i] << "] ";
                    }
                    cout << endl;
                }
                break;

            case 5: {
                int agregados = 0;
                while (!colaLlena(c)) {
                    enqueue(c, (c.final + 2) * 10);
                    agregados++;
                }
                cout << "Se agregaron " << agregados
                     << " elementos. La cola ahora esta llena (final = " << c.final << ")." << endl;
                cout << "Pruebe la opcion 1 ahora para validar el bloqueo por cola llena." << endl;
                break;
            }

            case 6:
                colaInicializar(c);
                cout << "Cola reiniciada correctamente (frente = " << c.frente
                     << ", final = " << c.final << ")." << endl;
                break;
            
            case 7:
                cout << "Cola en orden inverso: ";
                imprimirColaInversa(c);
                break;
            case 0:
                cout << "Saliendo del menu de validacion de cola..." << endl;
                break;

            default:
                cout << "Opcion fuera de rango. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 0);
};

