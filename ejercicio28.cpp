#include <iostream>
#include <string.h>
using namespace std;


int main() {
  char nombreUsuario[20];
  char grupoClase[20];
  int intentos = 0;

  do {
    cout<<"Dime tu nombre: ";
    cin>>nombreUsuario;

    cout<<"Dime tu grupo, grado y número de lista: ";
    cin>>grupoClase;

    if (strcmp(nombreUsuario, "nathaly") == 0 && strcmp(grupoClase, "2b6") == 0) {
      cout<<"Bienvenido al sistema";
      break;
    } else {
      intentos++;
      cout<<"Datos incorrectos. Intentos restantes: "<< 3 - intentos << endl;
    }
  } while (intentos < 3);
  if (intentos == 3) {
    cout<<"Lo sentimos, ha superado el número máximo de intentos permitidos";
  }
  return 0;
}
