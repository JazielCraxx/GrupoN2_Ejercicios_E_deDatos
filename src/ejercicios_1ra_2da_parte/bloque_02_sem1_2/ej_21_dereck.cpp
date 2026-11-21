// EJERCICIO 21 - DERECK AMADOR - 20241031358
//Buscar elemento en arreglo: Determinar si un valor específico existe en el arreglo y en qué posición.

int buscarElem(const int arrBuscar[], int tam, int buscado){   
    for (int i = 0; i < tam; i++){
        if (arrBuscar[i] == buscado){ return i;} 
    } return -1;
}