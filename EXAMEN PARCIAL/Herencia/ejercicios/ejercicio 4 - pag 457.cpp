#include <iostream>
using namespace std;
/*magine una empresa editorial que comercializa versiones de libros y casetes de audio de sus obras.
Cree una publicación de clase que almacene el título (una cadena) y el precio (tipo flotante) de la
 publicación. Desdeesta clase deriva dos clases: libro, que agrega un recuento de páginas (tipo int); 
 y cinta, que agrega unTiempo de juego en minutos (tipo flotante). Cada una de estas tres clases debe
  tener una función getdata ()para obtener sus datos del usuario en el teclado y una función putdata ()
   para mostrar sus datos.Escriba un programa main () para probar las clases de libros y cintas creando 
   instancias de ellas, preguntando alusuario para completar datos con getdata () y luego mostrar datos con putdata ()*/
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
	  cout<<"Precio-->"<<price<<endl;
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

int main (){
  Publication p1; //clase publication
   p1.getDataP();
   p1.putDataP();
  Book b1; //clase book derivada de publication
    b1.getDataB();
    b1.putDataB();
  Tape t1; //clase tape derivada de publication
    t1.getDataT();
    t1.putDataT();
}
