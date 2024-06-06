#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingresa una letra: ";
    cin >> letra;
    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "La letra es vocal";
    } else {
        cout << "La letra no es vocal";
    }
    
    return 0;
}
