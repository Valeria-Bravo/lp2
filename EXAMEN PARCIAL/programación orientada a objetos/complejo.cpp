#include <iostream>
using namespace std;
class Complejo{
   private:
   double real;
   double imaginario;
   public:
   Complejo(){//constructor por defecto
     real=0.0; // los valores se precargan en cero
     imaginario=0.0;
   }
   void leerComplejo(){
     cout<<"Ingrese el real:"<<endl;
     cin>>real;
     cout<<"Ingrese el imaginario: "<<endl;
     cin>>imaginario;
   }
   void escribirComplejo(){
        cout<<"Complejo:"<<real<<"+"<<imaginario<<" i"<<endl;
   }
  };
int main() {
  Complejo c1; //no se colocan parentesis
  c1.leerComplejo();
  c1.escribirComplejo();
}
