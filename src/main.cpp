#include <iostream>
#include "../include/operaciones.h"
using namespace std;

//FUNCIONES 
    double perimetroFunc(double rdio);
    unsigned long long factorialFunc(int num_fact, unsigned long long &resultado);
    int arrMaxFunc(const int ArrMaxVal[], int tam);  
    int arrMinFunc(const int ArrMinVAl[], int tam);
    int buscarElem(const int arrBuscar[], int tam, int buscado);
    int contarElem(const int arrContarElem[], int tam, int buscado);
    int sumarColumna(const int matriz[][max_col], int fila, int columna);

//STRUCTS  
struct Ejercicio{
    int num;
    void (*ejecutar)();
};

//PUNTEROS

//NODOS 

//VOID EJERCICIOS
//EJ 06
void ej06(){
    double rdio = 34;
    cout << "Ejercicio 06." << endl << "Calcular el Perímetro de un Círculo." << endl;
    if (rdio < 0)
    {
        cout << "Error, radio inválido." << endl;
        return;
    }
    cout << "Perimetro de " << rdio << " Es: " << perimetroFunc(rdio);
}

//EJ 09
void ej09(){
    int num_fact = 40;
    if (num_fact < 0){
        cout << "Error, factorial de número negativo, es indefinido." << endl;
    } else {
        cout << "Ejercicio 09." << endl << "Factorial de un número." << endl;
        cout << "El factorial de " << num_fact << " Es: " << factorialFunc(num_fact, 1);
    }
}

//EJ 18
void ej18(){
    int rellenar[] = {2, 2, 9, -9, 8};
    cout << "Ejercicio 18." << endl << "Mayor elemento en un arreglo." << endl;
    cout<< "El elemento mayor es: " << arrMaxFunc(rellenar, 5); 
}

//EJ 19
void ej19(){
    int rellenar[] = {4, 2, 9, -9, 8};
    cout << "Ejercicio 19." << endl << "Menor elemento en un arreglo." << endl;
    cout<< "El elemento menor es: " << arrMinFunc(rellenar, 5); 
}

//EJ 21
void ej21(){
    int rellenar[] = {23, 43, 11, 42, -3};
    int buscado = 13;
    cout << "Ejercicio 21." << endl << "Buscar elemento en arreglo." << endl;
    cout << "Elemento a buscar: " << buscado;
    int pos = buscarElem(rellenar, 5, buscado);
    if (pos != -1){
        cout << "Elemento encontrado, en la poscisión: " << pos << endl;
    } else { 
        cout << "Elemento no existe." << endl;
    }
}

//EJ 22
void ej22(){
    int rellenar[] = {1, 2, 1, 2, 1};
    int  buscado = 4;
    cout << "Ejercicio 22." << endl << "Frecuencia de un elemento." << endl;
    cout << "Elemento a buscar: " << buscado << endl;
    int pos = contarElem(rellenar, 5, buscado);
    if (pos > 0 ){
        cout << "El elemento: " << buscado << " Aparece: " << pos << " veces" << endl;
    } else {
        cout << "Elemento no aparece ninguna vez."<<endl;
    }
}

//EJ 27
void ej27(){
    int colSumar = -4;
    int rellenar[3][max_col] = {
        {3, 2, 5, 7, 0}, 
        {3, 5, 1, 2, 3}, 
        {5, 6, 0, 7, 4}
    };

    cout << "Ejercicio 27." << endl << "Sumar columna específica de matriz." << endl;
    cout << "Columna a sumar: " << colSumar << endl;
    if (colSumar < 0 || colSumar > max_col)
    {
        cout << "Ha elegido una columna inválida, intente de nuevo." << endl;
    } else {
    int suma = sumarColumna(rellenar, 3, colSumar);
    cout << "La suma de la columna: " << colSumar << " Es: " << suma;
    }
}

int main() { 

    const Ejercicio ejercicios[] = {
        {6, ej06},
        {9, ej09},
        {18, ej18},
        {19, ej19},
        {21, ej21},
        {22, ej22},
        {27, ej27}
    };
    const int total = size(ejercicios);
    
    int opcion{0};
    cout << "Bienvenido al Proyecto del Grupo N.2 - Estructura de Datos." <<endl;
    cout << "Ingrese en N. de ejercicio a comprobar: ";
    cin >> opcion;

    bool encontrado = false;
    for (int i = 0; i < total; i++) {
        if (ejercicios[i].num == opcion) {
            ejercicios[i].ejecutar();
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Ha elegido una opcion invalida." << endl;
    }

    return 0;  
}