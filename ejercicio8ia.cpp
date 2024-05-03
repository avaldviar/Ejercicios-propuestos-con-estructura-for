#include<iostream>
#include<vector>
using namespace std;

int main() {
    int longitud;
    cout << "Introduce la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud), vector2(longitud);
    int producto_punto = 0;

    cout << "Introduce los elementos del primer vector:\n";
    for(int i = 0; i < longitud; i++) {
        cin >> vector1[i];
    }

    cout << "Introduce los elementos del segundo vector:\n";
    for(int i = 0; i < longitud; i++) {
        cin >> vector2[i];
    }

    for(int i = 0; i < longitud; i++) {
        producto_punto += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los vectores es: " << producto_punto << endl;

    return 0;
}
