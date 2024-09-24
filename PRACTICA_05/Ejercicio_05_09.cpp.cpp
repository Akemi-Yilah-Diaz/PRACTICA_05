/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 9
// Problema planteado:Crea dos funciones, una que calcule el máximo común divisor (MCD) y otra que calcule
el mínimo común múltiplo (mcm) de dos números enteros.

*/
#include <iostream>
using namespace std;

int calcularMCD(int num1, int num2) {
    while (num2 != 0) {
        int resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }
    return num1;
}

int calcularMCM(int num1, int num2) {
    return (num1 * num2) / calcularMCD(num1, num2);
}

int main() {
    int primerNumero, segundoNumero;
    cout << "Ingrese dos números enteros ";
    cin >> primerNumero >> segundoNumero;

    int mcd = calcularMCD(primerNumero, segundoNumero);
    int mcm = calcularMCM(primerNumero, segundoNumero);

    cout << "Máximo Común Divisor (MCD) " << mcd << endl;
    cout << "Mínimo Común Múltiplo (mcm) " << mcm << endl;

    return 0;
}
