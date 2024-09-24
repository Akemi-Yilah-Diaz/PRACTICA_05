/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 7
// Problema planteado: Calcular el coeficiente binomial a partir de la lectura de dos números enteros a partir
de la relación:
*/
#include <iostream>
using namespace std;

int factorial(int num) {
    if (num <= 1) return 1; // El factorial de 0 o 1 es 1
    return num * factorial(num - 1); // Llamada recursiva para calcular el factorial
}

int coeficienteBinomial(int y, int x) {
    if (x > y || y < 0 || x < 0) return 0; // Verifica si los valores son válidos
    return factorial(y) / (factorial(x) * factorial(y - x)); // Calcula el coeficiente binomial
}

int main() {
    int y, x;
    cout << "Ingrese dos números enteros ";
    cin >> y >> x;

    int resultado = coeficienteBinomial(y, x);
    cout << "El coeficiente binomial C(" << y << ", " << x << ") es: " << resultado << endl;

    return 0;
}
