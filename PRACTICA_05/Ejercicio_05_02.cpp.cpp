/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 2
// Problema planteado: Cálculo de la edad exacta: Leer la fecha de nacimiento de una persona (día, mes, año) y
calcular su edad exacta en años, meses y días considerando la fecha actual.
*/

#include <iostream>
using namespace std;

void calcularEdad(int diaNacimiento, int mesNacimiento, int anioNacimiento, int diaActual, int mesActual, int anioActual) {
    int anios = anioActual - anioNacimiento;
    int meses = mesActual - mesNacimiento;
    int dias = diaActual - diaNacimiento;

    if (dias < 0) 
    {
        dias += 30; 
        meses--;
    }

    if (meses < 0)
    {
        meses += 12;
        anios--;
    }

    cout << "Edad exacta: " << anios << " años, " << meses << " meses y " << dias << " días." << endl;
}

int main() {
    int diaNacimiento, mesNacimiento, anioNacimiento;
    int diaActual, mesActual, anioActual;
    
    cout << "Ingrese su fecha de nacimiento (día, mes, año): ";
    cin >> diaNacimiento >> mesNacimiento >> anioNacimiento;
    
    cout << "Ingrese la fecha actual (día, mes, año): ";
    cin >> diaActual >> mesActual >> anioActual;

    calcularEdad(diaNacimiento, mesNacimiento, anioNacimiento, diaActual, mesActual, anioActual);
    
    return 0;
}