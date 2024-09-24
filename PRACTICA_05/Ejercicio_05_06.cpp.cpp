/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 6
// Problema planteado: Escribir un algoritmo que permita generar 50 números al azar en el rango (1-99) y
determine cuántos de estos elementos son números primos
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarNumeros(int numeros[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        numeros[i] = rand() % 101; 
    }
}

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(time(0));
    const int cantidad = 100;
    int numeros[cantidad];

    generarNumeros(numeros, cantidad); 

    cout << "Números generados: ";
    for (int i = 0; i < cantidad; i++) {
        cout << numeros[i] << " "; 
    }
    cout << endl; 
    
    cout << "Números primos: ";
    for (int i = 0; i < cantidad; i++) {
        if (esPrimo(numeros[i])) {
            cout << numeros[i] << " "; 
        }
    }
    cout << endl;

    return 0;
}

