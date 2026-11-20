// EJERCICIO 18 - DERECK AMADOR - 20241031358
//Menor elemento en arreglo: Encontrar el valor minimo en un arreglo unidimensional


int arrMinFunc(const int ArrMinVal[], int tam) {
    int min = ArrMinVal[0];
    for (int i = 1; i < tam; i++) {
        if (ArrMinVal[i] < min) {
            min = ArrMinVal[i];
        }
    }
    return min;
}

