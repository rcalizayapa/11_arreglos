#include <iostream>
using namespace std;

int main() {
    const int numDias = 7;
    float tempMin[numDias], tempMax[numDias], tempMedia[numDias];
    float tempBaja = 9999;

    for (int i = 0; i < numDias; ++i) {
        cout << "Ingrese la temperatura mínima del día " << i + 1 << ": ";
        cin >> tempMin[i];

        cout << "Ingrese la temperatura máxima del día " << i + 1 << ": ";
        cin >> tempMax[i];

        tempMedia[i] = (tempMin[i] + tempMax[i]) / 2;

        if (tempMin[i] < tempBaja) {
            tempBaja = tempMin[i];
        }
    }

    for (int i = 0; i < numDias; ++i) {
        cout << "La temperatura media del día " << i + 1 << " es: " << tempMedia[i] << endl;
    }

    cout << "El día con la temperatura más baja es: " << tempBaja << endl;

    return 0;
}