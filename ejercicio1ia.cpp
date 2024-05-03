//Dado un número natural n se desea calcular la suma de los números naturales desde 1 hasta n.
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero natural n: ";
    cin >> n;

    // Verificar que n sea un número natural
    if (n <= 0) {
        cout << "El numero ingresado no es natural." << endl;
        return 1;
    }

    // Calcular la suma
    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }

    // Mostrar el resultado
    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
