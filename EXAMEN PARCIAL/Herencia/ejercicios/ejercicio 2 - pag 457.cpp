#include <iostream>
using namespace std;
/*Declarar un vehículo de clase. De esta clase derivan two_wheeler, three_wheeler y four_wheelerclase.
 Muestra las propiedades de cada tipo de vehículo utilizando la función miembro de la clase.*/
class Vehicle {
	private:
	string matricula;
	public:
		Vehicle ( string _matricula){
			matricula=_matricula;
		}
		void mostrarV(){
     cout<<"Matricula: "<<matricula<<endl;	
    }

};

class Two_wheeler :public Vehicle {
	private:
	 string tinte;
	public:
		Two_wheeler (string _tinte, string _matricula) : Vehicle (_matricula){
			tinte=_tinte;
		}
	void mostrarTw(){
	mostrarV();
		cout<<"Tinte: "<<tinte<<endl;
	}
};

class Three_wheeler : public Vehicle{
	private:
		int cantidadGasolina;
	public:	
		Three_wheeler ( int _cantidadGasolina , string _matricula) : Vehicle ( _matricula){
			cantidadGasolina=_cantidadGasolina;
		}
	void mostrarTh(){
      mostrarV();
	    cout<<"Cantidad de gasolina"<<cantidadGasolina<<endl;
  }
};

class Four_wheeler : public Vehicle {
	private:
		string tipo;
	public:
		Four_wheeler ( string _tipo,  string _matricula): Vehicle ( _matricula){
			tipo=_tipo;
		}
	void mostrarFo(){
    mostrarV();
	cout<<"Tipo: "<<tipo<<endl;
  }
};
int main (){
	Vehicle v1 ("v13bw234");
	v1.mostrarV();
	Two_wheeler tw("rojo","be45be78");
    tw.mostrarTw();
    Three_wheeler th(200,"os45it6a");
    th.mostrarTh();
    Four_wheeler fo ("Hashtback","a56or7ci7t");
    fo.mostrarFo();
}
