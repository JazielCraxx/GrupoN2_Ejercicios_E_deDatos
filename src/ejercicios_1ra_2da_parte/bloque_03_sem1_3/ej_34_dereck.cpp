// EJERCICIO 34 - DERECK AMADOR - 20241031358
//Ordenar descendente (Selección): Método de selección para ordenar de mayor a menor.

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
}