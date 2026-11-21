// EJERCICIO 21 - DERECK AMADOR - 20241031358
//Sumar columna específica de matriz: Función que sume los elementos de una columna dada

int const max_col = 5;
int sumarColumna(const int matriz[][max_col], int fila, int columna){
    int suma = 0;
    for (int i = 0; i < fila; i++){
       suma+= matriz[i][columna];
    }
    return suma;
}