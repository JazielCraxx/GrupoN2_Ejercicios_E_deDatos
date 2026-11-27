// EJERCICIO 66 - DERECK AMADOR - 20241031358
//Expresión balanceada: Usar la pila para verificar si paréntesis, corchetes y llaves están balanceados. 
#include "../../../include/operaciones.h"

bool expresionBalanc(const char expresion[]){
    Pila p;
    pilaInicializar(p);
   int i = 0;
   if (!pushPila(p, expresion[i])) return false;
    while (expresion[i] != '\0') {

        if (expresion[i] == '(' ||
            expresion[i] == '[' ||
            expresion[i] == '{') {
            pushPila(p, expresion[i]);

        } else if (expresion[i] == ')' ||
                   expresion[i] == ']' ||
                   expresion[i] == '}') 
                {

            if (pilaVacia(p)) {
                return false;
            }

            int apertura;
            popPila(p, apertura);

            if ((expresion[i] == ')' && apertura != '(') || (expresion[i] == ']' && apertura != '[') ||
                (expresion[i] == '}' && apertura != '{')) 
            {
                return false;
            }
        }
        i++;
    }
    return pilaVacia(p);
}