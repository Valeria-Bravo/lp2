#include <iostream>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona ();


class Empleado: public Persona {
	private:
		string codigoEmpleado;
	public:
		Empleado(string, int, string);
		void mostrarEmpleado();
};  

Persona::Persona(string _nombre,int _edad){
	nombre=_nombre;
	edad=_edad;
}

Empleado::Empleado(string _nombre,int _edad, string _codigoEmpleado):Persona (_nombre,_edad){
	codigoEmpleado=_codigoEmpleado;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void Empleado::mostrarEmpleado(){
	cout<<"El codigo del empleado: "<<codigoEmpleado<<endl;
}
int main (){
	Empleado e1("Valeria", 19, "12345");
	e1.mostrarEmpleado();
	
}
