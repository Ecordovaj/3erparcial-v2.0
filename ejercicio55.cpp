#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;
unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    double numero;
    cout << "Introduce un número natural con dos decimales: ";
    cin >> numero;
    int parteEntera = static_cast<int>(numero);
    double parteDecimal = numero - parteEntera;
    double raizCuadrada = sqrt(numero);
    unsigned long long factorialResultado = factorial(parteEntera);
    bool primo = esPrimo(parteEntera);
    double potencia = pow(parteEntera, parteDecimal);
    bool enRango = (numero < 100) && (numero > 50);
    cout << fixed << setprecision(2);
    cout << "Raíz cuadrada: " << raizCuadrada << endl;
    cout << "Factorial: " << factorialResultado << endl;
    cout << "¿Es primo?: " << (primo ? "Sí" : "No") << endl;
    cout << "Número elevado a la potencia de los decimales: " << potencia << endl;
    cout << "¿El número es mayor a 50 y menor a 100?: " << (enRango ? "Sí" : "No") << endl;

    return 0;
}