#include <iostream>
#include <string.h>
using namespace std;

float calcularImporte(float precio, float cantidad) {
  if (precio <= 0 || cantidad <= 0) {
    cout << "El precio y la cantidad deben ser números positivos";
    return 0;
  } else {
    return precio * cantidad;
  }
}

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
      cout << "Bienvenido al sistema";
      break;
    } else {
      cout << "Datos incorrectos. Intentos restantes: " << 3 - intentos << endl;
    }
  }

  if (intentos == 3) {
    cout << "Se ha superado el número máximo de intentos permitidos";
  }

  float precio, cantidad, importe_total = 0.0;

  while (precio != 0) {
    cout << "Introduzca el precio unitario del artículo (0 para terminar): ";
    cin >> precio;

    if (precio <= 0) {
      cout << "El precio unitario debe ser un número positivo";
      continue;
    }

    cout << "Introduzca la cantidad vendida: ";
    cin >> cantidad;

    if (cantidad <= 0) {
      cout << "La cantidad vendida debe ser un número positivo";
      continue;
    }

    importe_total += calcularImporte(precio, cantidad);
    cout << "Importe parcial: " << importe_total << endl;
  }

  cout << "Importe total de la factura: " << importe_total << endl;
  return 0;
}
