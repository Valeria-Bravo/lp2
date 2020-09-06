#include <iostream>
using namespace std;
/*Comience con las clases de publicación, libro y cinta del ejercicio 4. 
Agregar una clase base de ventas que contengauna serie de tres carrozas 
para que pueda registrar las ventas en dólares de una publicación en particular
para el últimotres meses. Incluya una función getdata () para obtener tres 
montos de ventas del usuario y un putdata() función para mostrar las cifras 
de ventas. Después de las clases de libros y cintas para que se deriven detanto
publicación como ventas. Un objeto de libro de clase o cinta debe ingresar y
generar datos de ventasjunto con sus otros datos. Escriba una función main() 
para crear un objeto de libro y un objeto de cinta yejercer sus capacidades de
entrada / salida*/
class Publication {
	private:
		string title;
		float price;
	public:
	  void getDataP(){
      cout<<"Ingrese el titulo y el precio: "<<endl;
      string _title; int _price;
			cin>>_title>>_price;
      title=_title;
      price=_price;
    }
    void putDataP(){
      cout<<"Titulo--> "<<title<<endl;
	  cout<<"Precio--> "<<price<<endl;
    }
};

class Book: public Publication{
	private:
		int rPage;
	public:
		void getDataB(){
    getDataP();
      cout<<"Ingrese el recuento de paginas: "<<endl;
      int _rPage;
      cin>>_rPage;
      rPage=_rPage;
    }
    void putDataB(){
    putDataP();
      cout<<"Recuento de paginas--> "<<rPage<<endl;
    }
};

class Tape : public Publication{
	private:
		float pMinutes;
	public:
		void getDataT(){
    getDataP();
    cout<<"Ingrese minutos: "<<endl;
    float _pMinutes;
    cin>>_pMinutes;
    pMinutes=_pMinutes;
    }
    void putDataT(){
    putDataP();
    cout<<"Minutos--> "<<pMinutes<<endl;
    }
};
class BasedeVentas : public Publication { //almacena los montos 
	protected:
		float datosBV[3];
   public :
     void getDataBV(){
     getDataP();
       cout<<"Ingresar el primer monto: "<<endl;
       float datosBV1;
       cin>>datosBV1;
       cout<<"Ingresar el segundo monto: "<<endl;
       float datosBV2;
       cin>>datosBV2;
       cout<<"Ingresar el tercer monto: "<<endl;
       float datosBV3;
       cin>>datosBV3;
        datosBV[0]=datosBV1;
        datosBV[1]=datosBV2;
        datosBV[2]=datosBV3;
     }
    void putDataBV (){
      cout<<"Montos--> ["<<datosBV[0]<<" , "<<datosBV[1]<<" , "<<datosBV[2]<<" ]"<<endl;
    }
};


int main (){
  Publication p1;
   p1.getDataP();
   p1.putDataP();
  Book b1;
    b1.getDataB();
    b1.putDataB();
  Tape t1;
    t1.getDataT();
    t1.putDataT();
  BasedeVentas bv1; //clase aumentada 
    bv1.getDataBV();
    bv1.putDataBV();
}


