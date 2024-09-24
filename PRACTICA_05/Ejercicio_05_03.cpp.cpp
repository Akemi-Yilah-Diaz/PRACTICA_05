/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 3
// Problema planteado: . Leer una cantidad de segundos y convertirla en un formato de horas, minutos y
segundos (HH:MM:SS).
*/

#include <iostream>
using namespace std;

void convertirSegundos(int totalSegundos) {
    int horas = totalSegundos / 3600;
    int minutos = (totalSegundos % 3600) / 60;
    int segundos = totalSegundos % 60;
    
    cout << (horas < 10 ? "0" : "") << horas << ":" 
         << (minutos < 10 ? "0" : "") << minutos << ":" 
         << (segundos < 10 ? "0" : "") << segundos << endl;
}

int main() {
    int segundos;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;
    convertirSegundos(segundos);
    return 0;
}
