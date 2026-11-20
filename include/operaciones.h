#pragma once


// DERECK AMADOR - EJ 06
    const double Pi = 3.1416; 
        double perimetroFunc(double rdio){
        double perimetro = 2 * Pi * rdio;
        return perimetro;
    };

//DERECK AMADOR - EJ 09
    unsigned long long factorialFunc(int num_fact){
        unsigned long long resultado{1};
        int i;
        for (i = 1; i <= num_fact; i++)
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