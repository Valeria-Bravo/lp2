#include <iostream>
#include <string.h>
/*Escriba un programa para declarar las clases A, B y C. 
Cada clase contiene una matriz de caracteres como datosmiembro.
Aplicar múltiples herencias. Concatenar cadenas de clase A y B y
 almacenarlas en la clase C*/
using namespace std;

class ClaseA{
  protected:
    char datosA[4]={'1','2','3','4'};
  public:
     void mostrarA();
};
class ClaseB{
  protected:
    char datosB[5]={'a','b','c','d','e'};
  public:
      void mostrarB();
  
};

class ClaseC : public ClaseA , public ClaseB {
    char datosC[9]={};
  public:
    void mostrarC(){
      int numero=sizeof(datosC);
      strcat(datosB,datosA);
      strcat (datosC,datosB);
      for (int i=0;i<numero;i++){
        cout<<"{"<<datosC[i]<<"}"<<endl;
      }
    }
};

int main (){
  ClaseC concatenacion;
  concatenacion.mostrarC();
}
