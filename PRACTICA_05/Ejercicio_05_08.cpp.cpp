/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 8
// Problema planteado:- Leer un número n y encontrar todos los números narcisistas de n dígitos. Un número
narcisista es un número que es igual a la suma de sus dígitos elevados a la potencia n (por
ejemplo: 9474 = 9^4 + 4^4 + 7^4 + 4^4).
*/
 
#include <iostream>
#include <math.h>

using namespace std;

int digitos ( int a)
{
    int d = 0;

    while(a > 0){
        d++;
        a /= 10;
    }

    return d;
}

int generarSuma(int a)
{
    int dig = digitos(a);
    int suma = 0;
    while(a > 0){
        int d = a % 10;
        suma += pow(d, dig);
        a /= 10;
    }
    return suma;
}

int main (){
    int a;
    cout << "Ingrese un numero: ";
    cin >> a;
    int suma = generarSuma(a);
    if(a == suma){
        cout << "si es un numero narcisista";
    } else {
        cout << "No es un numero narcisista";
    }
}