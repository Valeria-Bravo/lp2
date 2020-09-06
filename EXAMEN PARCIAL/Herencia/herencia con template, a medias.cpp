#include <iostream>
using namespace std;
template <typename T>
class Persona{
  private:
  T nombre;
  public:
  Persona( T  _nombre){
    nombre=_nombre;
  }
  void obtenerNombre(){
    cout<<"Nombre: "<<nombre<<endl;
  }
};
template <typename G>
class Estudiante : public Persona <string> { //¿FORMA DE HEREDAR?
  private:
  G estudios;
  public:
  Estudiante (string _nombre, G _estudios): Persona(_nombre){
    estudios=_estudios;
  }
  void obtenerE(){
    obtenerNombre();
    cout<<"Estudios: "<<estudios<<endl;
  }
};


int main (){
  Persona <string>p1("victor");
  p1.obtenerNombre();
  Estudiante <string> e1("victor","salle");
  e1.obtenerE();
}




