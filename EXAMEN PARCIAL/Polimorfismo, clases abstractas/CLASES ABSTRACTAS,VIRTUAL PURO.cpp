//virtual pura es igual a abstracta
//clase astracta esque creas una funcion en la clase base pero no pone nada
//pero si la defines que hara en una clase hija
#include <iostream>
using namespace std;
class Empleado {
	protected:
		float sueldo; 
	public:
		Empleado (float _sueldo){
			sueldo=_sueldo;//this--aasiga el valor de sueldo
		}
		virtual float CalcularSueldo()=0; //funcion virtual 
		void Test(){
			cout<<"test clase base  "<<endl;
		}
};

class EmpleadoVentas :public Empleado {
	protected:
		float comision;
	public:
		EmpleadoVentas ( float _sueldo, float _comision) : Empleado (_sueldo){
			comision=_comision;
		}
		float CalcularSueldo (){
			return (sueldo*30*(1+comision));
		}
};

int main (){
	EmpleadoVentas ev1(1300.50,120);
	ev1.Test();
	Empleado *e1;
	e1=&ev1; //la direccion debe de apuntar al objeto de empleado ventas mas no a la clase 
	cout<<"Sueldo de empleado de ventas "<<e1->CalcularSueldo()<<endl;
}
