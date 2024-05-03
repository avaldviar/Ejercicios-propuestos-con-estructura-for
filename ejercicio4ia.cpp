#include<iostream>
using namespace std;

int main() {
    int num_estudiantes = 10;
    double nota, suma = 0.0, promedio;

    for(int i = 1; i <= num_estudiantes; i++) {
        cout << "Introduce la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    promedio = suma / num_estudiantes;
    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}
