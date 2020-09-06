#include <iostream>
#include <vector>
#include <list>
#include <set>
using namespace std;
class DispositivoMovil{
  private:
    string tamaño;
    string modelo;
    set<string> inventario;
  public:
   DispositivoMovil( string _tamaño, string _modelo){
     tamaño=_tamaño;
     modelo=_modelo;
   }
   void agregar(){
    inventario.insert(modelo);
   }
   void comprobar_tamaño(){
    cout<<"tamaño es "<<inventario.size();
   }
   void mensajeInicio(){//para heredar
     cout<<"Est prediendo"<<endl;
   }
   void mensajeApagado(){//para heredar
     cout<<"Se esta apagando"<<endl;
   }

};

class Carateristicas{//clase abstracta
   public:
     virtual void mostrarCarcteristicas()=0;
};
class Celular : public DispositivoMovil{
  private: 
   string color;
   double version;
  public:
    Celular (string _color, double _version, string _tamaño, string _modelo ):DispositivoMovil(_tamaño, _modelo) {
      color=_color;
      version=_version;
    }
    void llamadas(){ //virtual
        cout<<"Esta realizando una llamada"<<endl;
    }
    void enviarSMS(){//virtual
      cout<<"Esta enviando un sms: "<<endl;
    }
    void mostrarCarcteristicas(){
      cout<<"Caracteristicas: "<<color<<" "<<version<<endl;
    }
    void mensajeInicio();
    void mensajeApagado();

};

class Computadoras : public DispositivoMovil{
  private:
    int espacio;
    string so;
  public:
    Computadoras(int _espacio, string _so,string _tamaño, string _modelo ):DispositivoMovil(_tamaño, _modelo){
        espacio =_espacio;
        so=_so;
    }
    void mostrarCarcteristicas(){
      cout<<"Caracteristicas: "<<espacio<<" "<<so<<endl;
    }
    void mostrarEspacio(){
      cout<<"Su espacio es: "<<espacio;
    }
    void mensajesubirArchivos(){
      cout<<"Se esta subiendo un archivo: "<<endl;
    }
    void espacioLLeno(){
      if (espacio<2){
        cout<<"Memoria llena, eliminar archivos..."<<endl;
      }
      else{
        cout<<"Aun tiene memoria..."<<endl;
      }
    }
    void mensajeInicio();
    void mensajeApagado();

  
};
class Tablet:  public DispositivoMovil{
  private:
     string marca;
     int bateria;
     list <string> marca1;
  public:
    Tablet( string _marca, int _bateria,string _tamaño, string _modelo ):DispositivoMovil(_tamaño, _modelo){
      marca=_marca;
      bateria=_bateria;
    }
    void mostrarCarcteristicas(){
      cout<<"Caracteristicas: "<<marca<<" "<<bateria<<endl;
    }
    void mostrarUbicacion(){
      cout<<"Se esta buscando su ubicacion"<<endl;
    }
    void mensajeBinevenida (){
       cout<<"Binevenido"<<endl;
    }
    void mensajebajaBateria(){
      if (bateria<5){
      cout<<"Su bateria se esta agotando, conecte el cargador..."<<endl;
      }
      else {
        cout<<"No hay desgaste de bateria por ahora"<<endl;
      }
    }
    void mensajeInicio();
    void mensajeApagado();
};
template <typename T>
T MaxEspacio (T *pArr, int arrasize){ // para ver el amuor espacio
  for( int i=0; i<arrasize; i++){
    if (pArr[i]>max){
      max=pArr[i];
    }
    cout<<pArr[i]<<endl;
  }
    return max;
}

int main() {
    Celular c1 ("blanco",7.0, "grande", "Express Music");
     c1.mostrarCarcteristicas();
     c1.llamadas();
     c1.enviarSMS();
     c1.mensajeInicio();
     c1.mensajeApagado();
     Computadoras co1(200,"windows", "mediano", "express");
      c1.mostrarCarcteristicas();
     co1.mostrarEspacio();
     co1.mensajesubirArchivos();
     co1.mensajeInicio();
     co1.mensajeApagado();
     Tablet t1("samsung",97,"pequeño", "express");
    t1.mostrarCarcteristicas();
     t1.mostrarUbicacion();
     t1.mensajebajaBateria();
     t1.mensajeInicio();
     t1.mensajeApagado();

}
