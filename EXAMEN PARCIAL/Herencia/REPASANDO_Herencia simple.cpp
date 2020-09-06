#include <iostream>
using namespace std;

class Persona {
	private:
		string nombre;
	public:
		Persona(string);
		void mostrarPersona();
};

class Alumno : public Persona { //herencia simple //herencia jerarquica
	private:
		string codigoAlumno ;
	public:
		Alumno (string,string);
		void mostrarAlumno ();
};

Persona::Persona(string _nombre){
	nombre=_nombre;
}

Alumno::Alumno(string _nombre, string _codigoAlumno) : Persona (_nombre){
       codigoAlumno=_codigoAlumno;
}
void Persona::mostrarPersona()   {
	cout<<"NOMBRE: "<<nombre<<endl;
}

void Alumno::mostrarAlumno(){
	mostrarPersona ();
	cout<<"codigo de alumno:"<<codigoAlumno<<endl;
}
int main (){
	Alumno a1("valeria","12345");
	a1.mostrarAlumno();
}
