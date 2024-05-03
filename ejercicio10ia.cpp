#include<iostream>
#include<vector>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Introduce el número de filas de la matriz: ";
    cin >> filas;
    cout << "Introduce el número de columnas de la matriz: ";
    cin >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas)), transpuesta(columnas, vector<int>(filas));

    cout << "Introduce los elementos de la matriz:\n";
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "La transposición de la matriz es:\n";
    for(int i = 0; i < columnas; i++) {
        for(int j = 0; j < filas; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
