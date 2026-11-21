#pragma once


// DERECK AMADOR - EJ 06
    const double Pi = 3.1416;  
    double perimetroFunc(double rdio){
        return 2 * Pi * rdio;;
    };

//DERECK AMADOR - EJ 09
     unsigned long long factorialFunc(int num_fact, unsigned long long resultado){
        for (int i = 1; i <= num_fact; i++)
        {
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