#include <iostream>
using namespace std;
class Punto3D{
   private:
   int punto1;
   int punto2;
   int punto3;
   public:
   Punto3D(){//constructor por defecto
     punto1=0;
     punto2=0;
     punto3=0;
   }
   Punto3D(int _punto1, int _punto2, int _punto3){ //constructor por parametro
        punto1=_punto1;
        punto2=_punto2;
        punto3=_punto3;
   }
   Punto3D(Punto3D &x){//copia
     punto1=x.punto1;
     punto2=x.punto2;
     punto3=x.punto3;
   }
   void leerPunto(){
     cout<<"Ingrese el primer punto"<<endl;
     cin>>punto1;
     cout<<"Ingrese el segundo punto"<<endl;
     cin>>punto2;
     cout<<"Ingrese el tercer punto"<<endl;
     cin>>punto3;
   }
   void escribirPunto(){
        cout<<"Punto1: "<<punto1<<endl;
        cout<<"Punto2: "<<punto2<<endl;
        cout<<"Punto3: "<<punto3<<endl;
   }
  };
int main() {
  Punto3D p1;//uso del constructor por defecto
  //p1.leerPunto();
  p1.escribirPunto();
  Punto3D p2(3,1,2);//uso del constructor alternativo o parametro
  p2.escribirPunto();
  Punto3D p3(p2);//uso del constructor por copia
  p3.escribirPunto();
}
