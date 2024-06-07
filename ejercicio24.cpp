#include<iostream>
using namespace std;

int main(){

int num,p,ex;

cout<<"dime el numero que quieres elevar";
cin>>num;
cout<<"dime el exponente";
cin>>ex;
p=1;

for(int i=0;i< ex;i++){;

p*=num;
}
 
cout<<num<< "elevado a la potencia" <<ex<< "es" <<p<<endl;

return 0;
}
