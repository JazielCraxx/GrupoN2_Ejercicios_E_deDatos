// EJERCICIO 42 - DERECK AMADOR - 20241031358
//Invertir cadena: Crear una versión invertida de una cadena (ej: "hola" → "aloh").

void invertirCadena(const char cadenaOriginal[], char cadenaInvertida[]){
    int longitud{0};
    while (cadenaOriginal[longitud] != '\0'){
        longitud++;
    }
    for (int i = 0; i < longitud; i++){
        cadenaInvertida[i] = cadenaOriginal[longitud - 1 - i];
    }
    cadenaInvertida[longitud] = '\0';
}
