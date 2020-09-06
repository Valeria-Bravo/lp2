#include <iostream>
using namespace std;
/*Derive una clase llamada employee2 de la clase de empleado. Esta nueva clase
 debería agregar un tipoelemento de datos doble llamado compensación y, también,
un tipo de enumeración llamado período para indicar siAl empleado se le paga por 
hora, semana o mes. Para simplificar, puede cambiar el administrador,clases de 
científicos y trabajadores, por lo que se derivan de empleado2 en lugar de empleado.
 Sin embargo,tenga en cuenta que, en muchas circunstancias, podría estar más en el 
espíritu de OOP crear una base separadaclase llamada compensación y tres nuevas clases
manager2, scientist2 y labour2 y usan múltiplesherencias para derivar estas clases 
de las clases originales de gerente, científico y trabajador yde compensación. De
esta manera, ninguna de las clases originales necesita ser modificada*/
class Empleado {
};

class Empleado2 : public Empleado{
   private:
     double compensacion;
     enum periodo {hora,semana,mes};
     periodo pago;
};
class Administrador: public Empleado2 {
};

class Cientifico: public Empleado2 {
};

class Trabajador :public Empleado2 {
};

class Compensacion{
};

class Administrador2: public Administrador , public Compensacion {
};

class Cientifico2: public Cientifico , public Compensacion{
};

class Trabajador2 :public Trabajador , public Compensacion{
};

int main (){
}

