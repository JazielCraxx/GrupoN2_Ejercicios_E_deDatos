// EJERCICIO 18 - DERECK AMADOR - 20241031358
//Mayor elemento en arreglo: Encontrar el valor máximo en un arreglo unidimensional


int arrMaxFunc(const int ArrMaxVal[], int tam) {
    int max = ArrMaxVal[0];
    for (int i = 1; i < tam; i++) {
        if (ArrMaxVal[i] > max) {
            max = ArrMaxVal[i];
        }
    }
    return max;
}

