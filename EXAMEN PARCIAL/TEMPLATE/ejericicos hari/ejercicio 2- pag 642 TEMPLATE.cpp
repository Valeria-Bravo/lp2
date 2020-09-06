#include <iostream>
using namespace std;
/*
Escriba un programa para mostrar valores de diferentes
tipos de datos utilizando una plantilla y un constructor.*/
template< typename T >
class Base{
	T a;
	public:
		Base(T _a){
			a=_a;
		}
		void mostrar(){
			cout<<"Dato: "<<a<<endl;
		}
};
int main(){
	Base<int> nuevo(5);
	nuevo.mostrar();
  Base <float> nuevo2 (3.2);
  nuevo2.mostrar();
	Base <char> nuevo3 ('a');
  nuevo3.mostrar();
  Base <string> nuevo4 ("hola mundo");
  nuevo4.mostrar();
}
