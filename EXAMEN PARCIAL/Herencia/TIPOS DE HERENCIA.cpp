//HERENCIA HIBRIDA EN GENERAL
#include <iostream>
using namespace std;

class Persona {
	private:
		string nombre;
	public:
		Persona(string _nombre){
			nombre=_nombre;
		}
		void mostrarP();
};

class Alumno : public Persona { //herencia simple //herencia jerarquica
	private:
		string codigo ;
	public:
		Alumno (string _nombre, string _codigo ): Persona (_nombre){
       		codigo=_codigo;
		}
		void mostrarA ();
};



class Profesor: public Persona{ //herencia multinivel
	private:
		int edad;
	public:
		Profesor (string _nombre, int _edad): Persona (_nombre){
			edad=_edad;
		}
		void mostrarPr();
};



class Nuevo: public Alumno, public Profesor { //herencia multiple
	private:
		string traslado;
	public:
		Nuevo (string _codigo, int _edad, string _traslado, string _alumno, string _profesor) : Alumno( _codigo,_alumno), Profesor (_profesor,_edad){
			traslado=_traslado;
		}  
		void mostrarN();
};




void Persona::mostrarP()   {
	cout<<"Nombre: "<<nombre<<endl;
}

void Alumno::mostrarA(){
	mostrarP();
	cout<<"Codigo de alumno: "<<codigo<<endl;
}
void Profesor::mostrarPr(){
	mostrarP();
	cout<<"Edad: "<<edad<<endl;
}

void Nuevo::mostrarN(){
	mostrarPr();
	cout<<"Traslado: "<<traslado<<endl;
}
int main (){
	cout<<"HERENCIA SIMPLE, JERARQUICA"<<endl;
	Alumno a1("valeria","12345"); //herencia simple, jerarquica
	a1.mostrarA();
	cout<<"HERENCIA MULTINIVEL"<<endl;
  	Profesor p1 ("Gonzalo", 18);//herencia multinivel
  	p1.mostrarPr();
  	cout<<"HERENCIA MULTIPLE"<<endl;
  	Nuevo n1("0987",16, "la salle","valeria","gonzalo" );//herencia multiple
  	n1.mostrarN();
}
