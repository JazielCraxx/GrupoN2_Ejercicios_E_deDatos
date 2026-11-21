// EJERCICIO 21 - DERECK AMADOR - 20241031358
//Frecuencia de un elemento: Contar cuántas veces aparece un valor en el arreglo

int contarElem(const int arrContarElem[], int tam, int buscado){
    int contador{0};
    for (int i = 0; i < tam; i++){
        if (arrContarElem[i] == buscado){
            contador++;
        }
    } return contador;
}