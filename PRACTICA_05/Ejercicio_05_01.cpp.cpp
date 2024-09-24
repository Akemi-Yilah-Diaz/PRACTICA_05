/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 1
// Problema planteado: Leer el monto del préstamo, la tasa de interés anual y el número de años para pagar y
calcular el pago mensual de un préstamo usando la fórmula de amortización.
*/
#include <iostream>
#include <cmath> 

using namespace std;

double calcularpago(double monto, double tasaanual, int anios) {
    double tasamensual = tasaanual / 100 / 12; 
    int numpagos = anios * 12; 

    return (monto * tasamensual * pow(1 + tasamensual, numpagos)) /
           (pow(1 + tasamensual, numpagos) - 1);
}

int main() {
    double monto, tasaanual;
    int anios;
    
    cout << "Ingrese el monto del préstamo: ";
    cin >> monto;
    cout << "Ingrese la tasa de interés anual (en porcentaje): ";
    cin >> tasaanual;
    cout << "Ingrese el número de años para pagar: ";
    cin >> anios;
    
    double pagomensual = calcularpago(monto, tasaanual, anios);

    cout << "El pago mensual es: " << pagomensual << endl;
    
    return 0;
}
