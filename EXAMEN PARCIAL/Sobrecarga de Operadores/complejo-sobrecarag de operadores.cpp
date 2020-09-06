#include <iostream>
using namespace std;
//sobrecarga de operadores
class Complex;
 class Complejo{
   private:
   double real;
   double imaginario;
   public:
   Complejo(double _real, double _imaginario){
     real=_real;
     imaginario=_imaginario;
   }
   Complejo(){
     real=0;
     imaginario=0;
   }
   /*Complejo operator +(Complejo c1){
     Complejo aux;
     aux.real=real+c1.real;
     aux.imaginario=imaginario+c1.imaginario;
     return aux;
   }*/
   Complejo operator -(Complejo c1){
     Complejo aux;
     aux.real=real-c1.real;
     aux.imaginario=imaginario-c1.imaginario;
     return aux;
   }
   Complejo operator *(Complejo c1){
     Complejo aux;
     aux.real=real*c1.real;
     aux.imaginario=imaginario*c1.imaginario;
     return aux;
   }
   Complejo operator /(Complejo c1){
     Complejo aux;
     aux.real=real/c1.real;
     aux.imaginario=imaginario/c1.imaginario;
     return aux;
   }
   void mostrar(){
     cout<<real<<" "<<imaginario<<endl;
   }
   friend Complejo operator +(Complejo c1, double x){
      Complejo aux;
      aux.real=c1.real+x;
      aux.imaginario=c1.imaginario+x;
      return aux;
   }
   friend Complejo operator +(Complejo x1, Complex x2);//tienes que declarlo en la clase original para luego poder usarlo
   friend Complejo operator -(Complejo x1, Complex x2);

 };


 class Complex {
    private: 
    double x;
    double y ;
    public: 
    Complex (double _x, double _y){
      x=_x;
      y=_y;
    }
    Complex(){
      x=0;
      y=0;
    };
     friend Complejo operator +(Complejo x1, Complex x2){//se debe respetar el orden
       Complejo aux;
        aux.real=x1.real+x2.x;
        aux.imaginario=x1.imaginario+x2.y;
         return aux;
       }//con el friend se declara dentro y se define fuera de la clase
      friend Complejo operator -(Complejo x1, Complex x2){
        Complejo aux;
        aux.real=x1.real-x2.x;
        aux.imaginario=x1.imaginario-x2.y;
        return aux;
      }
 };

int main (){
  Complejo c1(2.2,3.1),c2(2.4,1.5), c3;
  //c3=c1+c2;
  //c3.mostrar();
  c3=c1-c2;
  c3.mostrar();
  c3=c1*c2;
  c3.mostrar();
  c3=c1/c2;
  c3.mostrar();
  c3=c1+2.0;
  c3.mostrar();
  Complex co1(2.1,3.2);
  c3=c1+co1;//se almacena en complejo
  c3.mostrar();
  c3=c1-co1;
  c3.mostrar();
   return 0;
}
