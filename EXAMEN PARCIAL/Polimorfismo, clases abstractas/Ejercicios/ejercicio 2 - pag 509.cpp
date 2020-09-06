#include <iostream>
#include <list>
/*Suponga que necesita definir clases para objetos de empleados y gerentes. Un empleado tiene un
nombre, código de empleado, salario y edad. Un gerente también es un empleado. Pero un objeto gestor
contiene una lista adicional de referencias a objetos de empleados que supervisa el gerente. Un
El objeto empleado también debe contener una referencia a su gerente. Un gerente puede supervisar a
La mayoría de los 10 empleados. Se requiere imprimir detalles del empleado o gerente. Cuando la información de
se imprime un objeto de empleado, se imprime su nombre, salario y edad. Cuando la información de un
se imprime el objeto del gerente, se imprime su nombre, salario y edad y los nombres de todos los empleados
que él / ella supervisa se muestran. Defina las clases teniendo en cuenta lo siguiente:
(a) Las referencias a objetos de empleados se pueden agregar / eliminar de la lista de empleados supervisados
en un objeto gestor.
(b) La referencia al objeto administrador se puede modificar para un objeto empleado.*/
using namespace std;

 class Empleado {
   public:
   string nombre;
   string codigo;
   float salario;
   int edad;

   Empleado (string _nombre, string _codigo, float _salario, int _edad){
     nombre=_nombre;
     codigo=_codigo;
     salario=_salario;
     edad=_edad;
   }
 };
 //deberia crear una clase que un empleado a la vez sea gerente

 class Gerente : public Empleado {
   private:
   list<Empleado> empleados;
   public:
   Gerente (string _nombre, string _codigo, float _salario, int _edad) : Empleado (_nombre, _codigo, _salario, _edad) {
   }
   void colocar(Empleado _empleado) {
     empleados.push_back(_empleado);
   }

   void mostrar() {
     for(const auto& empleado : empleados) {
       cout <<"Nombre: "<< empleado.nombre <<endl;
       cout<<"Codigo: "<<empleado.codigo<<endl; 
       cout<<"Salario: "<<empleado.salario<<endl;
       cout<<"Edad: "<<empleado.edad<<endl;
     }
   }
};

int main () {
  Empleado e = Empleado("Valeria", "1234", 930.0, 18);
  Gerente g = Gerente("Gonzalo", "5678", 930.0, 18); //ahi esta el error, en gerente 
  g.colocar(e);
  g.mostrar();
}
