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
