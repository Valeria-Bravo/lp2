#include <iostream>
using namespace std;
/*Derive una clase llamada employee2 de la clase de empleado. Esta nueva clase
 deber�a agregar un tipoelemento de datos doble llamado compensaci�n y, tambi�n,
un tipo de enumeraci�n llamado per�odo para indicar siAl empleado se le paga por 
hora, semana o mes. Para simplificar, puede cambiar el administrador,clases de 
cient�ficos y trabajadores, por lo que se derivan de empleado2 en lugar de empleado.
 Sin embargo,tenga en cuenta que, en muchas circunstancias, podr�a estar m�s en el 
esp�ritu de OOP crear una base separadaclase llamada compensaci�n y tres nuevas clases
manager2, scientist2 y labour2 y usan m�ltiplesherencias para derivar estas clases 
de las clases originales de gerente, cient�fico y trabajador yde compensaci�n. De
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

