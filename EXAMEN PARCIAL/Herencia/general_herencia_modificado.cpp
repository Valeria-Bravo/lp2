//incluimos la libreria
#include <iostream>
using namespace std;
//implementamos la clase
class Mascota{
	//parte protected
	protected:
	//datos generales de la mascota
	int edad;
	double peso;
	string nombre;	
	string raza;
	//parte publica
	public:
	Mascota(int _edad, double _peso, string _nombre, string _raza){
		edad=_edad; //nuevo atributo
		peso=_peso; //atributo
		nombre=_nombre; //atributo
		raza=_raza;//nuevo atributo
	}
	//destructor
	~Mascota(){}
	virtual void presentacion()=0;

	
	
};
class Perro: public Mascota{ //clase perro
	public:
	Perro(int _edad, double _peso, string _nombre, string  _raza): Mascota(_edad, _peso, _nombre, _raza){}
	~Perro(){}
	virtual void presentacion(){ //presenta a la mascota
		cout<<"hola soy un perro y me llamo "<<nombre<< " y mi raza es "<<raza<<endl;		
	}
	virtual void presentacion_especifica(){ //nuevo metodo //presentacion
		cout<<"Mi peso es "<<peso<< "kilos y tengo "<<edad<<" años"<<endl;
	}
	void ladrido(){ //sonido
		cout <<"guau guau"<<endl;
	}
};
class Gato: public Mascota{ //clase gato
	public:
	Gato(int _edad, double _peso, string _nombre, string _raza): Mascota(_edad, _peso, _nombre, _raza){}
	~Gato(){} //destructor
	virtual void presentacion(){  //presenta a la mascota
		cout<<"hola soy un gato y me llamo "<<nombre<< " y mi raza es "<<raza<<endl;		
	}
	virtual void presentacion_especifica(){ //nuevo metodo //presentacion
	cout<<"Mi peso es "<<peso<< "kilos y tengo "<<edad<<" años"<<endl;
	}
	void maullido (){ //sonido
		cout<<" miau miau"<<endl;
	}
};
class Loro: public Mascota{ //clase loro
	public:
	Loro(int _edad, double _peso, string _nombre,  string _raza): Mascota(_edad, _peso, _nombre, _raza){}
	~Loro(){} //destructor
	virtual void presentacion(){  //presenta a la mascota
		cout<<"hola soy un loro y me llamo "<<nombre<< " y mi raza es "<<raza<<endl;		
	}
	virtual void presentacion_especifica(){ //nuevo metodo //presentacion
	cout<<"Mi peso es "<<peso<< "kilos y tengo "<<edad<<" años"<<endl;
	}
	void repetir (){ //sonido
		cout<<"parlateo"<<endl;
	}
};
int main(){
	//Mascota 
	//edad, peso, nombre, raza
	Perro per(15, 45.2, "Jalea", "beagle"); 
	per.presentacion(); //muestra el nombre y la raza
	per.presentacion_especifica(); // muestra el peso y los años
	per.ladrido(); //muestra el sonido 
	
	//edad, peso, nombre, raza
	Gato gat(5, 11.5, "Mishifu", " pug ");
	gat.presentacion(); //muestra el nombre y la raza
	gat.presentacion_especifica(); // muestra el peso y los años
	gat.maullido(); //muestra el sonido 
	
	//edad, peso, nombre, raza
	Loro lor(2, 5.8, "Poly", "buldog ");
	lor.presentacion();//muestra el nombre y la raza
	lor.presentacion_especifica();  // muestra el peso y los años
	lor.repetir();  //muestra el sonido 
	return 0;
}
