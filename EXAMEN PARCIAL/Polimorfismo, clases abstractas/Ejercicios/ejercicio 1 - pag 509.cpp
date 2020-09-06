#include <iostream>
#include <math.h>
using namespace std;
/*Supongamos que hay una clase abstracta "Forma", que es la clase base de clases "Pol�gono" y
'Circulo'. La clase "Pol�gono" es la clase base de la cual se deriva una clase Rectangular. Virtual puro
Las funciones calcular �rea y calcular per�metro se declaran en la clase Forma. Estas funciones
en realidad se definen en las clases derivadas "Rect�ngulo" y "C�rculo". Definir las clases "Forma",
"Pol�gono", "Rect�ngulo" y "C�rculo". Escriba una funci�n global "ComputeAllArea" como doble
computeAllArea (Shape * s [100], int numberofShapes).
La funci�n anterior calcula el �rea total de todas las formas objeto se�aladas por s [0], s [1],
� .S [numberOfShapes]*/
class Forma {
  public:
    void virtual computeArea()=0; //virtual puro o abstracto 
    void virtual computePerimetro()=0; //virtual puro o abstracto
};

class Poligono: public Forma{
    
};

class Circulo: public Forma{
	double radio;
  	public: 
     	Circulo(double _radio){
        	radio=_radio;
     	}
    	void computeArea(){
	      double area=pow(radio,2)*3.14;
	      cout<<"El area es: "<<area<<endl;
   		 }
    	void computePerimetro(){
	      double perimetro=2*3.14*radio;
	      cout<<"El perimetro es: "<<perimetro<<endl;
    	}
};

class Rectangulo :public Poligono {
double altura;
double base;
  public: 
    Rectangulo (int _altura,int _base){
      altura=_altura;
      base=_base;
    }
    void computeArea (){
      double area=base*altura;
      cout<<"El area es: "<<area<<endl;
    }
    void computePerimetro (){
      double perimetro=2*(base+altura);
      cout<<"El perimetro es: "<<perimetro<<endl;
    }

};

double computeAllArea(Forma* s[100], int numberofFormas){ //funcion global
  for(int i=0;i<numberofFormas;i++){
	    s[i]->computeArea();
	    s[i]->computePerimetro();
	}
}

int main (){
	Forma* abc[100];
	abc[0]=new Rectangulo(3,4);
	abc[1]=new Circulo(3);
	computeAllArea(abc,2);
}

