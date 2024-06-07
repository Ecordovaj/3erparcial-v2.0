#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char nombre[20];
  char grupo[20];
  int intentos = 0;
  do {
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "Ingresa tu grupo y número de lista: ";
    cin >> grupo;
    if (strcmp(nombre, "nathaly") == 0 && strcmp(grupo, "2b6") == 0) {
      cout << "Bienvenido al sistema";
      break;
    } else {
      intentos++;
      cout << "Datos incorrectos. Intentos restantes: " << 3 - intentos << endl;
    }
  } while (intentos < 3);
  if (intentos == 3) {
    cout << "Lo sentimos, ha superado el número máximo de intentos permitidos";
  }

  float precio, cantidad, total = 0;

  do {
    cout << "Introduce el precio del artículo. Para salir, ingresa 0: ";
    cin >> precio;

    if (precio <= 0) {
      cout << "El precio debe ser positivo.";
      continue;
    }

    cout << "Introduce la cantidad vendida: ";
    cin >> cantidad;

    if (cantidad <= 0) {
      cout << "La cantidad debe ser positiva.";
      continue;
    }

    total += precio * cantidad;

    cout << "Importe parcial: " << total << endl;
  } while (precio != 0);

  cout << "Importe total de la factura: " << total << endl;

  return 0;
}
