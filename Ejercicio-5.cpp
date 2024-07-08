#include <iostream>
#include <string>

using namespace std;

int main() {
    const int maxAlumnos = 100;
    string nombresPG[maxAlumnos];
    string nombresFP[maxAlumnos];
    string alumnosComunes[maxAlumnos];
    int n, n1, s = 0;

    cout << "Ingrese la cantidad de alumnos de PG: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin >> nombresPG[i];
    }

    cout << "Ingrese la cantidad de alumnos de FP: ";
    cin >> n1;
    for (int i = 0; i < n1; ++i) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin >> nombresFP[i];
        for (int e = 0; e < n; ++e) {
            if (nombresFP[i] == nombresPG[e]) {
                alumnosComunes[s] = nombresFP[i];
                ++s;
                break; // No es necesario seguir buscando en PG para este estudiante
            }
        }
    }

    cout << "Los alumnos comunes en los dos cursos son: " << endl;
    if (s != 0) {
        for (int i = 0; i < s; ++i) {
            cout << alumnosComunes[i] << endl;
        }
    } else {
        cout << "No hay alumnos que lleven los dos cursos" << endl;
    }

    return 0;
}
