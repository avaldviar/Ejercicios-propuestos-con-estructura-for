#include<iostream>
#include<vector>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;
    cout << "Introduce el número de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Introduce el número de columnas de la primera matriz: ";
    cin >> columnas1;
    cout << "Introduce el número de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Introduce el número de columnas de la segunda matriz: ";
    cin >> columnas2;

    if(columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 0;
    }

    vector<vector<int>> matriz1(filas1, vector<int>(columnas1)), matriz2(filas2, vector<int>(columnas2)), producto(filas1, vector<int>(columnas2));

    cout << "Introduce los elementos de la primera matriz:\n";
    for(int i = 0; i < filas1; i++) {
        for(int j = 0; j < columnas1; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Introduce los elementos de la segunda matriz:\n";
    for(int i = 0; i < filas2; i++) {
        for(int j = 0; j < columnas2; j++) {
            cin >> matriz2[i][j];
        }
    }

    for(int i = 0; i < filas1; i++) {
        for(int j = 0; j < columnas2; j++) {
            producto[i][j] = 0;
            for(int k = 0; k < columnas1; k++) {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "El producto de las matrices es:\n";
    for(int i = 0; i < filas1; i++) {
        for(int j = 0; j < columnas2; j++) {
            cout << producto[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
