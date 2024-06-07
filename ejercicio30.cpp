#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char nombre[50];
  char grupo[10];
  int intentos = 0;

  const char *nombre_correcto = "nathaly";
  const char *grupo_correcto = "2b6";

  while (intentos < 3) {
    intentos++;

    cout << "Introduzca su nombre: ";
    cin >> nombre;

    cout << "Introduzca su grupo y número de lista: ";
    cin >> grupo;

    if (strcmp(nombre, nombre_correcto) == 0 && strcmp(grupo, grupo_correcto) == 0) {
      cout << "Bienvenido al sistema\n";
      break;
    } else {
      cout << "Datos incorrectos. Intentos restantes: " << 3 - intentos << endl;
    }

    if (intentos == 3) {
      cout << "Se ha superado el número máximo de intentos permitidos";
      return 0;
    }
  }

  float unidad, cantidad, importe_total = 0;

  while (1) {
    cout << "Introduzca el precio unitario del artículo (Ingrese 0 para terminar): ";
    cin >> unidad;

    if (unidad == 0) {
      break;
    }

    cout << "Introduzca la cantidad vendida: ";
    cin >> cantidad;

    if (cantidad < 0) {
      cout << "La cantidad vendida debe ser un número positivo";
      continue;
    }

    importe_total += unidad * cantidad;

    cout << "Importe parcial: " << importe_total << endl;

    if (unidad == 0) {
      break;
    }
  }

  cout << "Venta finalizada. Importe total de la factura: " << importe_total << endl;

  return 0;
}
