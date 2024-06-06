#include <iostream>
using namespace std;
int main(){
	int n[5], mayor ,menor ,repe ,i ;

	for(i=0;i<5;i++){
		cout << "Numero " << i+1 << endl;
		cin >> n[i];
	}

    mayor = n[0];
    menor = n[0];
    repe = n[0];

	for(i=0;i<5;i++){
		if(n[i]>mayor){
			mayor=n[i];
		}

		if(n[i]<menor){
			menor=n[i];
		}

		if(n[i]==repe){
			repe=n[i];
		}
	}



	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor << endl;
	cout << "Numeros repetidos: " << repe << endl;
	
	return 0;
}
