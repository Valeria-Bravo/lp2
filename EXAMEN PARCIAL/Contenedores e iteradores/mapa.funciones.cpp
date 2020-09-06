#include <iostream>
#include <map>
#include <string> 
using namespace std;
/* Funciones de map: operator [], alt(), empty (), size(), max_size() insert (), erase(), swap (), clear(), find(), count() */

int main (){
  map <int,string> mapa1;
  //operador[]--> hace referencia al elemento presente en la posici�n dentro del operador, estructura: nombre del mapa [clave]
  mapa1[1]="Gonzalo "; //ejemplo de estructura del operator []
  mapa1[2]="Victor";
  mapa1[3]="Valeria";
  cout<<"Salida del mapa: "<<mapa1[1]<<" "<<mapa1[2]<<" "<<mapa1[3]<<endl;
  //at()-->referencia al elemento asignado al valor clave como parametro de la funci�n
  //DIFERENCIA ENTRE AMBOS: at() verififca el rango y genera una excepci�n cuando accdemos a un elemento que no est� dentro del rango, mientras que [] no lo verifica
  mapa1[4]="Alexandra";
  cout<<"Funcion at(): "<<mapa1.at(4)<<endl;
  //cout<<"Funcion at excepci�n(): "<<mapa1.at(5);-->lanza excepci�n
  cout<<"Funci�n empty(): "<<mapa1.empty()<<endl; //FUNCI�N EMPTY: verifica si esta vaci� con un 1 o no con un 0.
  cout<<"Funci�n size(): "<<mapa1.size()<<endl; //FUNCI�N SIZE: Devuelve el tama�o del mapa
  cout<<"Funci�n max_size(): "<<mapa1.max_size()<<endl; //FUNCI�N MAX_SIZE: Devuelve el n�mero m�ximo de elementos de un mapa puede contener.
  map <int,int> mapa2,mapa3; //mapa creado para usar la funci�n insert
  mapa2.insert({2,20}); //usando la funci�n insert--> insertar elementos con una clave particulr en el mapa
  mapa2.insert({1,10});
  mapa2.insert({3,30});
  mapa2.insert({4,40});
  mapa3.insert({3,4});
  mapa3.insert({5,6});
  mapa3.insert({7,8});
  cout<<"Mapa con funci�n insert(): "<<endl;
  for (auto itr = mapa2.begin(); itr != mapa2.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 
  mapa2.erase(4); //FUNCI�N ERASE: Borra elementos de un contenedor
  cout<<"Mapa usando la funci�n erase(): "<<endl;
  for (auto itr = mapa2.begin(); itr != mapa2.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 
  swap(mapa2, mapa3); //FUNCI�N SWAP: Intercambia el contenido de los dos mapas
  cout<<"Mapa usando la funci�n swap(), para intercambiarlos: "<<endl;
  for (auto itr = mapa2.begin(); itr != mapa2.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 
  cout<<endl;
  for (auto itr = mapa3.begin(); itr != mapa3.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 
  cout<<"Tama�o del mapa3 antes de usar la funci�n clear(): "<<mapa3.size()<<endl; //para demostrar la funci�n clear() mostraremos su tama�o antes y despu�s y demostrar su uso
  mapa3.clear();//FUNCI�N CLEAR: Elimina todos los elementos del mapa
  cout<<"Tama�o del mapa3 despu�s de usar la funci�n clear(): "<<mapa3.size()<<endl;
  cout<<"Mapa usando la funci�n find()"<<endl; //FUNCI�N FIND: devuelve un iterdor que se refiere a la posici�n donde la clave est presente en el mapa
  for (auto itr = mapa2.find(5); itr != mapa2.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 

  cout<<"Funci�n count(): "<<mapa2.count(3)<<endl;//FUNCI�N COUNT:Devuelve si esta presente con un 1 o no con un 0 la clave
  if (mapa2.count(4)) //con una condicional representamos la funci�n count() implementada anteriormente para colocarlo en texto y no en n�meros
        cout << "Esta presente "; 
    else
        cout << "No esta presente "; 
  
}
