//HERENCIA HIBRIDA
#include <iostream>
using namespace std;

class Persona { //CLASE BASE
	private:
		string nombre;
	public:
		Persona (string _nombre){
			nombre=_nombre;
		}
		void mostrarPersona();
};

class Alumno : public Persona{ //HERENCIA SIMPLE, JERARQUICA
	private:
		string codigoIngreso;
	public:
		Alumno( string _nombre, string _codigoIngreso): Persona (_nombre){
			codigoIngreso=_codigoIngreso;
		}
		void mostrarAlumno();
};
class Profesor : public Persona { //HERENCIA MULTINIVEL
	private:
		int sueldo;
	public:
		Profesor (string _nombre, int _sueldo): Persona (_nombre){
			sueldo=_sueldo;
		}
		void mostrarProfesor ();
}; 

class Auxiliar : public Alumno, public Profesor { //HERENCIA MULTIPLE
	private:
		int horasTrabajo; 
	public:
		Auxiliar (string _alumno, string _codigoIngreso, string _profesor, int _sueldo, int _horasTrabajo) : Alumno (_alumno,_codigoIngreso), Profesor (_profesor, _sueldo){
			horasTrabajo=_horasTrabajo;
		}
		void mostrarAuxiliar();
};

void Persona::mostrarPersona(){
	cout<<"El nombre es:"<<nombre<<endl;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"El codigo de ingreso es: "<<codigoIngreso<<endl;
}

void Profesor::mostrarProfesor(){
	mostrarPersona();
	cout<<"El sueldo es: "<<sueldo<<endl;
}

void Auxiliar::mostrarAuxiliar(){
    mostrarProfesor();
	cout<<"La horas de trabajo son: "<<horasTrabajo<<endl;
}

int main (){
   cout<<"HERENCIA SIMPLE, JERARQUICA"<<endl;
   Alumno a1("valeria", "12345"); //herencia simple,jerarquica
   a1.mostrarAlumno();
   cout<<"HERENCIA MULTINIVEL"<<endl;
   Profesor p1 ("Gonzalo",1800);//herencia multinivel
   p1.mostrarProfesor();
   cout<<"HERENCIA MULTIPLE"<<endl;
   Auxiliar ax1( "victor","0987","Daniel" ,1500,12); //herencia multiple
   ax1.mostrarAuxiliar();
}
