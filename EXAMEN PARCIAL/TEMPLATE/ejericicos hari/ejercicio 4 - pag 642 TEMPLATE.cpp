#include <iostream>
using namespace std; 
/*Escriba un programa para definir la plantilla y muestre el valor
 absoluto de int, flotante y tipo de datos largo de variable.*/
template <typename  TIPOD>
void mostrarAbsoluto(TIPOD numero){
	if (numero<0){
		numero=numero*-1;
	}
	cout<<"Valor absoluto: "<<numero<<endl;
}
int main (){
	int num1=-4;
    mostrarAbsoluto(num1);
	float num2=-56.1;
	mostrarAbsoluto(num2);
	long  num3=-126474335; 
	mostrarAbsoluto(num3);

}
