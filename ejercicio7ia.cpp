/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores.
El resultado debe mostrarse en un tercer vector.*/

#include<iostream>
#include<vector>
using namespace std;

main() {
    int longitud;
    cout << "Introduce la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud), vector2(longitud), suma(longitud);

    cout << "Introduce los elementos del primer vector:\n";
    for(int i = 0; i < longitud; i++) {
        cin >> vector1[i];
    }

    cout << "Introduce los elementos del segundo vector:\n";
    for(int i = 0; i < longitud; i++) {
        cin >> vector2[i];
    }

    for(int i = 0; i < longitud; i++) {
        suma[i] = vector1[i] + vector2[i];
    }

    cout << "La suma de los vectores es:\n";
    for(int i = 0; i < longitud; i++) {
        cout << suma[i] << " ";
    }

    return 0;
}
