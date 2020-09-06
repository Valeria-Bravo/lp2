#include <iostream>
using namespace std;

class Persona{
  private:
  string nombre;
  public:
  Persona(string _nombre){
    nombre=_nombre;
  }
  Persona (){
    nombre="nel";
  }
  void ponerNombre (){
    cout<<"Ingrese el nombre: "<<endl;
    cin>>nombre;
  }
  void obtenerNombre(){
    cout<<"Nombre: "<<nombre<<endl;
  }
};

class Estudiante : public Persona {
  private:
  string estudios;
  public:
  Estudiante (string _nombre, string _estudios): Persona(_nombre){
    estudios=_estudios;
  }
  void ponerE(){
    ponerNombre();
    cout<<"Ingrese estudios: "<<endl;
    cin>>estudios;
  }
  void obtenerE(){
    obtenerNombre();
    cout<<"Estudios: "<<estudios<<endl;
  }
};

class Empleado : public Persona{
   private:
   int sueldo;
   public:
   Empleado (string _nombre, int _sueldo): Persona (_nombre){
     sueldo=_sueldo;
   }
   void ponerEm(){
     ponerNombre();
     cout<<"Ingrese sueldo: "<<endl;
     cin>>sueldo;
   }
   void obtenerEmpleado(){
     obtenerNombre();
     cout<<"Sueldo: "<<sueldo<<endl;
   }
};

int main (){
  Persona p1;
  p1.ponerNombre();
  p1.obtenerNombre();
  Estudiante e1("victor","salle");
  e1.ponerE();
  e1.obtenerE();
  Empleado em1("gonzalo",19);
  em1.ponerEm();
  em1.obtenerEmpleado();
}


//segundo codigo
#include <iostream>
using namespace std;

class A{
 private:
 int a;
 public:
 A(int _a){
   a=_a;
 }
 void ponerA(){
   cout<<"Ingrese A: "<<endl;
   cin>>a;
 }
 void ObtenerA(){
   cout<<"A: "<<a<<endl;
 }
};
class B {
  string b;
  public:
  B(string _b){
    b=_b;
  }
  void ponerB(){
   cout<<"Ingrese B: "<<endl;
   cin>>b;
 }
 void ObtenerB(){
   cout<<"B: "<<b<<endl;
 }

};
class C : public A , public B {
  int c;
  public:
  C(int _a, string _b, int _c): A(_a), B(_b){
    c=_c;
  }
  void ponerC(){
   ponerA();
   ponerB();
   cout<<"Ingrese C: "<<endl;
   cin>>c;
  }
 void ObtenerC(){
   ObtenerA();
   ObtenerB();
   cout<<"C: "<<c<<endl;
   }

};
int main() {
  C c1(1,"gonzalo",2);
  c1.ponerC();
  c1.ObtenerC();
}
