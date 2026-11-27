#include <iostream>
#include "../include/operaciones.h"
using namespace std;

//FUNCIONES 
    double perimetroFunc(double rdio);
    unsigned long long factorialFunc(int num_fact, unsigned long long &resultado);
    int arrMaxFunc(const int ArrMaxVal[], int tam);  
    int arrMinFunc(const int ArrMinVAl[], int tam);
    int buscarElem(const int arrBuscar[], int tam, int buscado);
    int contarElem(const int arrContarElem[], int tam, int buscado);
    int sumarColumna(const int matriz[][max_col], int fila, int columna);
    void minimoValColumna(int const matriz[][max_col], int fila, int columna, int minColumna[]);
    void ordenarDesc(int arreglo[], int tam);
    bool compararCadenas(const char carac1[], const char carac2[]);
    void invertirCadena(const char cadenaOriginal[], char cadenaInvertida[]);
    bool verificarPalindromo(const char cadena[]);
    double promedioNotas(const double notas[], int cantidad);
    int libroFunc(const Libros listaLibros[], int cantidadLibros, const char libroBuscado[]);
    Fraccion sumaD2Fracciones(const Fraccion& fracc1, const Fraccion& fracc2);

//STRUCTS  
struct Ejercicio{
    int num;
    void (*ejecutar)();
};

//INICIALIZACION DE STRUCTS
//EJ 55
const int maxLibros{5};
Libros listaLibros[maxLibros] ={
    {"Prision Verde", "Ramón Amaya Amador", 1950},
    {"Blanca Olmedo", "Lucila Gamero de Medina", 1908},
    {"Don Quijote de la Mancha", "Miguel de Cervantes", 1605 },
    {"El Principito", "Antoine de Saint-Exupéry", 1943},
    {"El vampiro", "Froylán Turcios", 1910}
};


//PUNTEROS

//NODOS 

//VOID EJERCICIOS
//EJ 06
void ej06(){
    double rdio = 34;
    cout << "Ejercicio 06." << endl << "Calcular el Perímetro de un Círculo." << endl;
    if (rdio < 0)
    {
        cout << "Error, radio inválido." << endl;
        return;
    }
    cout << "Perimetro de " << rdio << " Es: " << perimetroFunc(rdio);
}

//EJ 09
void ej09(){
    int num_fact = 40;
    if (num_fact < 0){
        cout << "Error, factorial de número negativo, es indefinido." << endl;
    } else {
        cout << "Ejercicio 09." << endl << "Factorial de un número." << endl;
        cout << "El factorial de " << num_fact << " Es: " << factorialFunc(num_fact, 1);
    }
}

//EJ 18
void ej18(){
    int rellenar[] = {2, 2, 9, -9, 8};
    cout << "Ejercicio 18." << endl << "Mayor elemento en un arreglo." << endl;
    cout<< "El elemento mayor es: " << arrMaxFunc(rellenar, 5); 
}

//EJ 19
void ej19(){
    int rellenar[] = {4, 2, 9, -9, 8};
    cout << "Ejercicio 19." << endl << "Menor elemento en un arreglo." << endl;
    cout<< "El elemento menor es: " << arrMinFunc(rellenar, 5); 
}

//EJ 21
void ej21(){
    int rellenar[] = {23, 43, 11, 42, -3};
    int buscado = 13;
    cout << "Ejercicio 21." << endl << "Buscar elemento en arreglo." << endl;
    cout << "Elemento a buscar: " << buscado;
    int pos = buscarElem(rellenar, 5, buscado);
    if (pos != -1){
        cout << "Elemento encontrado, en la poscisión: " << pos << endl;
    } else { 
        cout << "Elemento no existe." << endl;
    }
}

//EJ 22
void ej22(){
    int rellenar[] = {1, 2, 1, 2, 1};
    int  buscado = 4;
    cout << "Ejercicio 22." << endl << "Frecuencia de un elemento." << endl;
    cout << "Elemento a buscar: " << buscado << endl;
    int pos = contarElem(rellenar, 5, buscado);
    if (pos > 0 ){
        cout << "El elemento: " << buscado << " Aparece: " << pos << " veces" << endl;
    } else {
        cout << "Elemento no aparece ninguna vez."<<endl;
    }
}

//EJ 27
void ej27(){
    int colSumar = -4;
    int rellenar[3][max_col] = {
        {3, 2, 5, 7, 0}, 
        {3, 5, 1, 2, 3}, 
        {5, 6, 0, 7, 4}
    };

    cout << "Ejercicio 27." << endl << "Sumar columna específica de matriz." << endl;
    cout << "Columna a sumar: " << colSumar << endl;
    if (colSumar < 0 || colSumar > max_col)
    {
        cout << "Ha elegido una columna inválida, intente de nuevo." << endl;
    } else {
    int suma = sumarColumna(rellenar, 3, colSumar);
    cout << "La suma de la columna: " << colSumar << " Es: " << suma;
    }
}

//EJ - 29
void ej29(){
    int rellenar[4][5] = {
        {3, 2, 5, 7, 0},
        {3, 5, 1, 2, 3},
        {5, 6, 0, 7, 4},
        {5, 1, 1, 4, 92}
    };
    int resultado[5];
    cout << "Ejercicio 29." << endl;
    cout << "Menor elemento por columna." << endl;

    minimoValColumna(rellenar, 4, 5, resultado);
    for (int j = 0; j < 5; j++){
        cout << "Columna " << j + 1 << ": " << resultado[j] << endl;
    }
}

//EJ - 34
void ej34(){
    int rellenar[] = {4, 2, 9, -9, 8};
    int resultado[5];
    cout << "Ejercicio 34." << endl;
    cout << "Ordenar descendente (Seleccion)." << endl;

    cout << "Elementos antes: ";
    for (int i = 0; i < 5; i++){
        cout << rellenar[i] << " ";
        resultado[i] = rellenar[i];
    }
    ordenarDesc(resultado, 5);
    cout << endl << "Elementos ordenados de forma descendente: ";

    for (int i = 0; i < 5; i++){
        cout << resultado[i] << " ";
    }
}

//EJ - 39
void ej39(){
    char cad1[] = "UNAH", cad2[] = "UNAH";
    cout << "Ejercicio 39." << endl;
    cout << "Comparar dos cadenas." << endl;
    cout << "Cadena N. 1 a comparar: " << cad1 << ". " << "Cadena N. 2: " << cad2 << endl;
    if (compararCadenas(cad1, cad2)){
        cout << "Las cadenas son iguales." << endl;
    }
    else{
        cout << "Las cadenas son diferentes." << endl;
    }
}

//EJ - 42
void ej42(){
    char cadena[] = "hola me llamo Dereck", cadinv[100];
    cout << "Ejercicio 42." << endl;
    cout << "Invertir cadena." << endl;
    if (cadena[0] == '\0' ){
        cout << "La cadena esta vacia, intente de nuevo ingresando un texto.    " << endl;
    } else { 
        invertirCadena(cadena, cadinv);
        cout << "Original : " << cadena << endl;
        cout << "Invertida: " << cadinv << endl;
    }
    
}

//EJ - 45
void ej45(){
    char texto[] = "Abba";
    cout << "Ejercicio 45." << endl;
    cout << "Verificar palindromo." << endl;
    if (texto[0] == '\0'){
        cout << "Error, no hay texto. Intente de nuevo ingresando una palabra." << endl;
    } else {
        cout << "Palabra a verificar si es palindroma: " << texto << endl;
        bool resultado = verificarPalindromo(texto);
        if (resultado){
            cout << "La palabra es palindroma." << endl;
        } else {
            cout << "La palabra NO es palindroma." << endl;
        }
    }
}

//EJ - 49
void ej49(){
    int cantNotas{4};
    double rellenar[] = {83.5, 73.6, 100, 89.92};
    cout << "Ejercicio 49." << endl;
    cout << "Calcular promedio de notas." << endl;
    if (cantNotas <= 0){
        cout << "Error, cantidad de notas inválida. Intente de nuevo." << endl;
        return;
    } else {
        for (int notas = 0; notas < cantNotas; notas++){
            cout << "Nota " << notas + 1 << ". Nota final: " << rellenar[notas] << endl;
        }
        double promedio = promedioNotas(rellenar, cantNotas);
        cout << "Promedio del estudiante: " << promedio << endl;
    }
}

//EJ - 55
void ej55(){
    char libroBuscado[100];
    cout << "Ejercicio 55." << endl;
    cout << "Buscar libro por título." << endl;
    cout << "Ingrese el titulo del libro a buscar: ";
    cin.ignore(1000, '\n');
    cin.getline(libroBuscado, 100);

    if (libroBuscado[0] == '\0') {
        cout << "Error, debe ingresar el titulo del libro para buscar. Intente de nuevo." << endl;
    } else {
        int indice = libroFunc(listaLibros, maxLibros, libroBuscado);
        if (indice != -1) {
            cout << "\nLibro encontrado en el indice [" << indice << "]:" << endl;
            cout << "Titulo: " << listaLibros[indice].tituloLibro << endl;
            cout << "Autor : " << listaLibros[indice].autor << endl;
            cout << "Año  : " << listaLibros[indice].anio << endl;
        } else {
           cout << "\nEl libro \"" << libroBuscado << "\" no se encuentra disponible en los registros." << endl;
        }
    }
}

//EJ - 58
void ej58(){
    Fraccion f1 = {1, 2};
    Fraccion f2 = {4, 3};
    cout << "Ejercicio 58." << endl;
    cout << "Sumar dos fracciones." << endl;

    if (f1.denominador == 0 || f2.denominador == 0){ 
        cout << "Error, el denominador no puede ser 0. Intente de nuevo."; 
    } else {
        Fraccion total = sumaD2Fracciones(f1, f2);
        cout << "Resultado: " << total.numerador << "/" << total.denominador << endl;
    }
}

//EJ - 61
void ej61(){
  mostrarMenuPila();
}

int main() { 

    const Ejercicio ejercicios[] = {
        {6, ej06},
        {9, ej09},
        {18, ej18},
        {19, ej19},
        {21, ej21},
        {22, ej22},
        {27, ej27},
        {29, ej29},
        {34, ej34},
        {39, ej39},
        {42, ej42},
        {45, ej45},
        {49, ej49},
        {55, ej55},
        {58, ej58},
        {61, ej61}
    };
    const int total = size(ejercicios);
    
    int opcion{0};
    cout << "Bienvenido al Proyecto del Grupo N.2 - Estructura de Datos." <<endl;
    cout << "Ingrese en N. de ejercicio a comprobar: ";
    cin >> opcion;

    bool encontrado = false;
    for (int i = 0; i < total; i++) {
        if (ejercicios[i].num == opcion) {
            ejercicios[i].ejecutar();
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Ha elegido una opcion invalida." << endl;
    }

    return 0;  
}