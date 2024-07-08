#include <iostream>
using namespace std;

void relleno(int* arreglo, int tam, int mult);

int main() {
    int tam, mult;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tam;

    // Crear un arreglo dinámico
    int* arreglo = new int[tam];

    cout << "Ingrese el número para completar con múltiplos: ";
    cin >> mult;

    relleno(arreglo, tam, mult);

    cout << "Los múltiplos son: ";
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Liberar la memoria del arreglo
    delete[] arreglo;

    return 0;
}

// Definimos la función:
void relleno(int* arreglo, int tam, int mult) {
    for (int i = 0; i < tam; i++) {
        arreglo[i] = mult * (i + 1);
    }
}
