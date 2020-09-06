#include <iostream>
using namespace std;

class Poligono {
   protected:
    double area;
    double perimetro;
   public:
   Poligono (){
     area=0.0;
     perimetro=0.0;
     }
     virtual void visualizarArea()=0; //polimorfimso es virtual puro, y es igual a clase abstracta
     virtual void visualizarPerimetro()=0;
};

class Cuadrado : public Poligono{
    private:
    int lado;
    public: 
    Cuadrado (int _lado){
      lado=_lado;
    }
    void visualizarArea(){
      area=lado*lado;
      cout<<area<<endl;
    }
    void visualizarPerimetro() {
      perimetro=lado+lado+lado+lado;
       cout<<perimetro<<endl;
     }
};
class Rectangulo : public Poligono{
  private: 
   int altura;
   int base;
   public:
   Rectangulo (int _altura, int _base){
     altura=_altura;
     base=_base;
   }
   void visualizarArea (){
     area=altura*base;
     cout<<area<<endl;
   }
   void visualizarPerimetro(){
     perimetro=(altura+base)*2;
     cout<<perimetro<<endl;
   }
}; 
int main (){
   Cuadrado c1(2);
   c1.visualizarArea();
   c1.visualizarPerimetro();
   Rectangulo r1(2,4);
   r1.visualizarArea();
   r1.visualizarPerimetro();
}

