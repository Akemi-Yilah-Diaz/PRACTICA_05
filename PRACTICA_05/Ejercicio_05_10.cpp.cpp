/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 10
// Problema planteado:. Crea una función que sea capaz de dibujar el "Triángulo de Pascal" indicándole
únicamente el tamaño del lado.
• Aquí puedes ver rápidamente cómo se calcula el triángulo:
https://commons.wikimedia.org/wiki/File:PascalTriangleAnimated2.gif
*/
#include <iostream>
using namespace std;

void dibujarTrianguloPascal(int tamaño)
{
    for (int fila = 0; fila < tamaño; fila++)
    {
        int numero = 1;
        for (int espacio = 0; espacio < tamaño - fila - 1; espacio++) 
        {
            cout << " ";
        }
        for (int columna = 0; columna <= fila; columna++)
        {
            cout << numero << " ";
            numero = numero * (fila - columna) / (columna + 1);
        }
        cout << endl;
    }
}

int main() 
{
    int tamaño;
    cout << "Ingrese el tamaño del lado del Triángulo de Pascal: ";
    cin >> tamaño;

    dibujarTrianguloPascal(tamaño);

    return 0;
}
