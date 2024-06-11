#include <iostream>
using namespace std;
int main (){
int opcion;
cout<<"Seleccione el tipo de usuario:"<<endl;
cout<< "1.Usuario Anonimo"<<endl;
cout<<"2.Usuario Registrado"<<endl;
cout<<"3.Usuario Administrador"<<endl;
cout<<"Ingrese su opcion (1-3): ";
cin>>opcion;

switch(opcion) {
   case 1:
  cout<< "Seleccionaste la opcion der usuario ANONIMO"<<endl;
  cout<< "1- Identificarse"<<endl;
  cout<<"2- Ver todos los productos de la venta"<<endl;
  cout<<"3- Salir de la aplicacion"<<endl;
    break;
  
    case 2:
  cout<< "Has seleccionado Usuario registrado." << endl;
  cout << "1- Modificar mis datos personales" << endl;
  cout << "2- Mostrar mis vendedores recomendados" << endl;
  cout << "3- s productos de mis vendedores recomendados" << endl;
  cout << "4- Valorar los productos"<< endl;
  cout << "5- Poner a la veta un producto" << endl;
  cout << "6- Desconectars(volver a anonimo)" << endl;
  cout << "0- Salir de la aplicacion" << endl;
   break;
    
    case 3:
   cout<<"Seleccionaste el usuario Administrador"<<endl;
   cout<<"1- Dar de alta al nuevo usuario"<<endl;
   cout<<"2- Modificar los datos del usuario"<<endl;
   cout << "3- Mostrar todos los usuarios" << endl;
   cout << "4- Mostrar todos los vendedores recomendados por un usuario" << endl;
   cout << "5- Ver los productos ofrecidos por un vendedor" << endl;
   cout<<"6- Mostrar todos los productos a la venta"<<endl;
   cout<<"7- Desconectarse (volver a anónimo)"<<endl;
   cout<<"0- Salir de la aplicación"<<endl;
   break;
  
  default:
   cout << "opcion no valida.Por favor ingrese una opcion entre"<<endl;
}
 return 0;
}
