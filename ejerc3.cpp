#include <iostream>
using namespace std;

int main() {
    int a, b, c, mayor, menor, medio;

    cout << "Ingrese sus 3 números: ";
    cin >> a >> b >> c;

    mayor = a;
    medio = b;
    menor = c;

    if (b > mayor) {
        mayor = b;
        medio = a;
    }
    if (c > mayor) {
        mayor = c;
        medio = a;
    }

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    medio = (a + b + c) - mayor - menor;

    cout << "El mayor es: " << mayor << endl;
    cout << "El medio es: " << medio << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}
