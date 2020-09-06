#include <iostream>
using namespace std;

class Rectangulo {
	private:
	  float largo;
	  float ancho;
	public:///METODOS
	Rectangulo ( float, float ); //CONSTRUCTOR
	void perimetro ();
	void area ();
};

Rectangulo::Rectangulo (float _largo, float _ancho){
	largo=_largo;
	ancho=_ancho;
}

void Rectangulo::perimetro (){
	float _perimetro;
	_perimetro=(2*largo)+ (2*ancho);
	cout<<" El perimetro es: "<<_perimetro<<endl;
}

void Rectangulo::area (){
	float _area;
	_area=(largo*ancho);
	cout<<" El arrea del rectangulo: "<<_area<<endl;
}
int main (){
	Rectangulo r1 (11,7);
	r1.perimetro();
	r1.area();
}
