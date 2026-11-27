// EJERCICIO 49 - DERECK AMADOR - 20241031358
//Calcular promedio de notas: Función que calcule el promedio de un estudiante (asumiendo notas almacenadas).

double promedioNotas(const double notas[], int cantidad) {
    double suma{0.0};
    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    return suma / cantidad;
}