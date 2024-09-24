/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 5
// Problema planteado: Crear un algoritmo que indique si un número es perfecto o no. Se dice que un número
es perfecto si la suma de sus divisores es igual al número. Por ejemplo, 6 tiene como
divisores 1, 2, y 3, entonces 1+2+3=6; el número 6 es perfecto. Si el número es 9, tiene
como divisores 1, 3, entonces 1+3=4; no es perfecto.
*/
#include <iostream>
using namespace std;

bool esNumeroPerfecto(int numero) {
    int sumaDivisores = 0;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }

    return sumaDivisores == numero;
}

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (esNumeroPerfecto(numero)) {
        cout << numero << " es un número perfecto." << endl;
    } else {
        cout << numero << " no es un número perfecto." << endl;
    }

    return 0;
}
