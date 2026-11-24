// EJERCICIO 21 - DERECK AMADOR - 20241031358
//Sumar columna específica de matriz: Función que sume los elementos de una columna dada

int const max_col = 5;
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
}