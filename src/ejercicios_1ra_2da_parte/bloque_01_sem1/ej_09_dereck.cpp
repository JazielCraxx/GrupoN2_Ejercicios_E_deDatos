// EJERCICIO 06 - DERECK AMADOR - 20241031358
//Factorial de un número: Función que calcule el factorial de un entero no negativo usando iteración.

   unsigned long long factorialFunc(int num_fact, unsigned long long resultado){
        for (int i = 1; i <= num_fact; i++)
        {
            resultado = resultado*i;
        }
        return resultado;
    }