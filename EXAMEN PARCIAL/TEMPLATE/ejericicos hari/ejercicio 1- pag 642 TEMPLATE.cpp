#include <iostream>
using namespace std;
/* Escriba un programa para pasar un objeto a la 
función de plantilla y mostrar sus miembros.*/
template< typename T >
void imprimir(T objeto){
	cout<<objeto<<endl;
}
int main(){
	int t=5;
	imprimir(t);
	char l='a';
	imprimir(l);
}
