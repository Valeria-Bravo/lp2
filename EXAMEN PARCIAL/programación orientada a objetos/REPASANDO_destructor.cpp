//DESTRUCTOR 
#include <iostream>
using namespace std;

class Perro{
	private:
	   string nombre;
	   string raza;
	public:
		Perro( string, string); //constructor
		~Perro(); //DESTRUCTOR
		void mostrarDatos();
		void jugar();
};

Perro::Perro(string _nombre, string _raza){
	nombre=_nombre;
	raza=_raza;
}
//DESTRUCTOR
Perro::~Perro(){
}
 void Perro::mostrarDatos(){ //no olvidar el void
	cout<<"Nombre "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
}

 void Perro::jugar(){
	cout<<"El perro esta jugando..."<<endl;
}
int main (){
	Perro perro1("carbon", "chusco");
	perro1.mostrarDatos();
	perro1.jugar();
	perro1.~Perro();
}
