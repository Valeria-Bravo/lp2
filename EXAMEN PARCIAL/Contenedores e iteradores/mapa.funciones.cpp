#include <iostream>
#include <map>
#include <string> 
using namespace std;
/* Funciones de map: operator [], alt(), empty (), size(), max_size() insert (), erase(), swap (), clear(), find(), count() */

int main (){
  map <int,string> mapa1;
  //operador[]--> hace referencia al elemento presente en la posición dentro del operador, estructura: nombre del mapa [clave]
  mapa1[1]="Gonzalo "; //ejemplo de estructura del operator []
  mapa1[2]="Victor";
  mapa1[3]="Valeria";
  cout<<"Salida del mapa: "<<mapa1[1]<<" "<<mapa1[2]<<" "<<mapa1[3]<<endl;
  //at()-->referencia al elemento asignado al valor clave como parametro de la función
  //DIFERENCIA ENTRE AMBOS: at() verififca el rango y genera una excepción cuando accdemos a un elemento que no está dentro del rango, mientras que [] no lo verifica
  mapa1[4]="Alexandra";
  cout<<"Funcion at(): "<<mapa1.at(4)<<endl;
  //cout<<"Funcion at excepción(): "<<mapa1.at(5);-->lanza excepción
  cout<<"Función empty(): "<<mapa1.empty()<<endl; //FUNCIÓN EMPTY: verifica si esta vació con un 1 o no con un 0.
  cout<<"Función size(): "<<mapa1.size()<<endl; //FUNCIÓN SIZE: Devuelve el tamaño del mapa
  cout<<"Función max_size(): "<<mapa1.max_size()<<endl; //FUNCIÓN MAX_SIZE: Devuelve el número máximo de elementos de un mapa puede contener.
  map <int,int> mapa2,mapa3; //mapa creado para usar la función insert
  mapa2.insert({2,20}); //usando la función insert--> insertar elementos con una clave particulr en el mapa
  mapa2.insert({1,10});
  mapa2.insert({3,30});
  mapa2.insert({4,40});
  mapa3.insert({3,4});
  mapa3.insert({5,6});
  mapa3.insert({7,8});
  cout<<"Mapa con función insert(): "<<endl;
  for (auto itr = mapa2.begin(); itr != mapa2.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 
  mapa2.erase(4); //FUNCIÓN ERASE: Borra elementos de un contenedor
  cout<<"Mapa usando la función erase(): "<<endl;
  for (auto itr = mapa2.begin(); itr != mapa2.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 
  swap(mapa2, mapa3); //FUNCIÓN SWAP: Intercambia el contenido de los dos mapas
  cout<<"Mapa usando la función swap(), para intercambiarlos: "<<endl;
  for (auto itr = mapa2.begin(); itr != mapa2.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 
  cout<<endl;
  for (auto itr = mapa3.begin(); itr != mapa3.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 
  cout<<"Tamaño del mapa3 antes de usar la función clear(): "<<mapa3.size()<<endl; //para demostrar la función clear() mostraremos su tamaño antes y después y demostrar su uso
  mapa3.clear();//FUNCIÓN CLEAR: Elimina todos los elementos del mapa
  cout<<"Tamaño del mapa3 después de usar la función clear(): "<<mapa3.size()<<endl;
  cout<<"Mapa usando la función find()"<<endl; //FUNCIÓN FIND: devuelve un iterdor que se refiere a la posición donde la clave est presente en el mapa
  for (auto itr = mapa2.find(5); itr != mapa2.end(); ++itr) { 
        cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl; 
    } 

  cout<<"Función count(): "<<mapa2.count(3)<<endl;//FUNCIÓN COUNT:Devuelve si esta presente con un 1 o no con un 0 la clave
  if (mapa2.count(4)) //con una condicional representamos la función count() implementada anteriormente para colocarlo en texto y no en números
        cout << "Esta presente "; 
    else
        cout << "No esta presente "; 
  
}
