#include<iostream>
using namespace std;

int main() {
    int num_estudiantes = 8;
    double nota, suma = 0.0, promedio;
    int aprobados = 0, reprobados = 0;

    for(int i = 1; i <= num_estudiantes; i++) {
        cout << "Introduce la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
        if(nota >= 6.0) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    promedio = suma / num_estudiantes;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
