/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 23/09/2024
// Número de ejercicio: 4
// Problema planteado: . Disponemos de una máquina que puede dar cambios con 5 tipos de monedas
distintas: 5 Bs., 1 Bs., 0.50 Bs., 0.20 Bs. y 0.10 Bs. Realizar el programa en el que, dado el
precio del artículo y la cantidad en bolivianos entregada por el consumidor, nos indique el
cambio a entregar empleando el menor número posible de monedas.
*/
#include <iostream>
using namespace std;

void calcularCambio(double cambio) {
    int monedas5 = cambio / 5;
    cambio -= monedas5 * 5;

    int monedas1 = cambio / 1;
    cambio -= monedas1 * 1;

    int monedas050 = cambio / 0.50;
    cambio -= monedas050 * 0.50;

    int monedas020 = cambio / 0.20;
    cambio -= monedas020 * 0.20;

    int monedas010 = cambio / 0.10;
    cambio -= monedas010 * 0.10;

    cout << "Monedas de 5 Bs: " << monedas5 << endl;
    cout << "Monedas de 1 Bs: " << monedas1 << endl;
    cout << "Monedas de 0.50 Bs: " << monedas050 << endl;
    cout << "Monedas de 0.20 Bs: " << monedas020 << endl;
    cout << "Monedas de 0.10 Bs: " << monedas010 << endl;
}

int main() {
    double precio, pagado;

    cout << "Ingrese el precio del artículo: ";
    cin >> precio;

    cout << "Ingrese la cantidad pagada: ";
    cin >> pagado;

    double cambio = pagado - precio;

    if (cambio < 0) {
        cout << "El monto pagado es insuficiente." << endl;
    } else if (cambio == 0) {
        cout << "No hay cambio que entregar." << endl;
    } else {
        cout << "Cambio a entregar: " << cambio << " Bs" << endl;
        calcularCambio(cambio);
    }

    return 0;
}
