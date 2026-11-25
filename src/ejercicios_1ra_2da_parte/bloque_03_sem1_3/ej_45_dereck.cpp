// EJERCICIO 45 - DERECK AMADOR - 20241031358
//Verificar palíndromo: Determinar si una cadena es igual al leerla de izquierda a derecha o viceversa.

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
}