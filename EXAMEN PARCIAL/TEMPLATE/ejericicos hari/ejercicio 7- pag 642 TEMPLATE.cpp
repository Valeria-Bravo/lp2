#include <iostream>
using namespace std;
/*Cree una función llamada swap () que intercambie los valores de los dos argumentos
que se le envían. (Probablemente desee pasar estos argumentos por referencia) Convierta
la función en una plantilla, de modo que pueda usarse con todos los tipos de datos
numéricos (char, int, float, etc.). Escriba un programa main () para ejercer la función 
con varios tipos*/
template <typename T>
void swamp(T &a, T &b){
	T aux;
	aux=a;
	a=b;
	b=aux;
}
int main(){
	int a0=5,b0=7;
	cout<<"Original INT:" <<a0<<"-"<<b0<<endl;
	swamp(a0,b0);
	cout<<"Cambiado: "<<a0<<"-"<<b0<<endl;
    float a1=2.3,b1=1.8;
	cout<<"Original FLOAT:" <<a1<<"-"<<b1<<endl;
	swamp(a1,b1);
	cout<<"Cambiado: "<<a1<<"-"<<b1<<endl;
    char a2='a',b2='b';
	cout<<"Original CHAR:" <<a2<<"-"<<b2<<endl;
	swamp(a2,b2);
	cout<<"Cambiado:"<<a2<<"-"<<b2<<endl;
}
