// EJERCICIO 29 - DERECK AMADOR - 20241031358
//Comparar dos cadenas: Determinar si dos cadenas son iguales (sin usar strcmp). 

bool compararCadenas(const char carac1[], const char carac2[]){
    int i{0};
    while (carac1[i] != '\0' && carac2[i] != '\0'){
        if (carac1[i] != carac2[i]){
            return false;
        }
        i++;
    }
    return carac1[i] == carac2[i];
}