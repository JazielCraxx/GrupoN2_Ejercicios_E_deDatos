// EJERCICIO 58 - DERECK AMADOR - 20241031358
//Sumar dos fracciones: Función que reciba dos fracciones y retorne su suma simplificada. 

struct Fraccion{
    int numerador, denominador;
};

Fraccion sumaD2Fracciones(const Fraccion& fracc1, const Fraccion& fracc2){
    Fraccion resultado;
    resultado.numerador = (fracc1.numerador * fracc2.denominador) + (fracc2.numerador * fracc1.denominador);
    resultado.denominador = fracc1.denominador * fracc2.denominador;
    int a = resultado.numerador;
    int b = resultado.denominador;
    if (a < 0){
        a = -a;
    } 
    if (b < 0){
        b = -b;
    }
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    resultado.numerador /= a;
    resultado.denominador /= a;
    if (resultado.denominador < 0){
        resultado.numerador *= -1;
        resultado.denominador *= -1;
    }
    return resultado;
}