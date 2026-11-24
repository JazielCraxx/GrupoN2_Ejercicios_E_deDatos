// EJERCICIO 29 - DERECK AMADOR - 20241031358
//Menor elemento por columna: Encontrar el valor mínimo en cada columna de una matriz. 

int const max_col = 5;
void minimoValColumna(int const matriz[][max_col], int fila, int columna, int minColumna[]){
    for (int j = 0; j < max_col; j++){
        int valMinimo = matriz[0][j];
        for (int i = 1; i < fila; i++){
            if (matriz[i][j] < valMinimo){
                valMinimo = matriz[i][j];
            }           
        }
        minColumna[j] = valMinimo;
    }
}