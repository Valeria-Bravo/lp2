#include <iostream>
using namespace std;

int suma( int a, int b){ //sobrecarga de la función de manera simple
	cout<<"Suma int: "<<endl;
  return a+b;
}
double suma (double a, double b ){ //no olvides que cuando no es void siempre tienes que poner return.
	cout<<"Suma double: "<<endl;
  return a+b;
}

int main(){
	cout<<suma(1,2)<<endl;
  cout<<suma(1.4,2.2)<<endl;
}
