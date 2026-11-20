#include <iostream>
#include "../include/operaciones.h"
using namespace std;

//FUNCIONES 
    double perimetroFunc(double rdio = 34);
    unsigned long long factorialFunc(int num_fact);
    int arrMaxFunc(const int ArrMaxVal[], int tam);  
    int arrMinFunc(const int ArrMinVAl[], int tam);


int main() { 
    int opcion{0};
    cout << "Bienvenido al Proyecto del Grupo N.2 - Estructura de Datos." <<endl;
    cout << "Elija un ejercicio: ";
    cin>> opcion;
     
    // se buscara la forma de cambiar para que se pueda elejir el ej sin usar case
    switch (opcion){
        //EJ 06
        case 6: 
        cout << "Ejercicio 06." << endl << "Calcular el Perímetro de un Círculo." << endl;
        cout << "Perimetro es: " << perimetroFunc();
        break;

        //EJ 09
        case 9: {
            int num_fact = 5;
            if (num_fact < 0){
                cout << "Error, factorial de número negativo, es indefinido." << endl;
                break;
            } else {
                cout << "Ejercicio 09." << endl << "Factorial de un número." << endl;
                cout << "El factorial de " << num_fact << " Es: " << factorialFunc(num_fact);
            }
        break;
        }

        //EJ 18
        case 18: {
            int rellenar[] = {2, 2, 9, -9, 8};
            cout << "Ejercicio 18." << endl << "Mayor elemento en un arreglo." << endl;
            cout<< "El elemento mayor es: " << arrMaxFunc(rellenar, 5); 
            break;
        }

        //EJ 19
        case 19: {
            int rellenar[] = {4, 2, 9, -9, 8};
            cout << "Ejercicio 19." << endl << "Menor elemento en un arreglo." << endl;
            cout<< "El elemento menor es: " << arrMinFunc(rellenar, 5); 
            break;
        }
    default:
        cout << "Ha elegido una opcion invalida.";
        break;
    } 
        
    

    

}