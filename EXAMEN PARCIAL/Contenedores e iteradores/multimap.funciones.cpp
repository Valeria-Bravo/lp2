#include <iostream>
#include <map>
#include <string>
using namespace std;
/* Funciones de MULTIMAP: insert(), max_size(), count(), clear(), swap(), erase(), find(), size(), empty()*/
int main() {
  //DIFERENCIA ENTRE MAP Y MULTIMAP: multimap almacena pares de clave y valor, el map solo almcenará cada valor una vez para una clave especifica
  multimap<int,int> multimapa1;
  multimapa1.insert({1,10});//FUNCIÓN INSERT: Inserta elementos en el contenedor de multimap.
  multimapa1.insert({2,20});
  multimapa1.insert({3,30});
  cout<<"Mapa original con la función insert(): "<<endl;
  for (auto itr = multimapa1.begin(); itr != multimapa1.end(); ++itr) { 
      cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl;  
    } 
  cout<<"Función max_size(): "<<multimapa1.max_size()<<endl;//FUNCIÓN MAX_SIZE: Devuelve el número maximo de elementos que el multimap puede tener
  cout<<"Función count(): 2 esta presente -"<<multimapa1.count(2)<<" - veces"<<endl; //FUNCIÓN COUNT:Devuelve el número de veces que una lcave esta presente en el mapa (clave, más no valor) 
  multimap <int,int> multimapa;//creamos otro multimapa para demostrar la función clear, a través de su tamaño
  multimapa.insert({4,5});
  multimapa.insert({6,7});
  cout<<"Tamaño del multimapa1 antes de usar la función clear(): "<<multimapa.size()<<endl;
  multimapa.clear();//FUNCIÓN CLEAR: Elimina todos los elementos del contenedor indicado.
  cout<<"Tamaño del multimapa1 después de usar la función clear(): "<<multimapa.size()<<endl;
  multimap <int,int> multimapa2; //creamos otro mapa para la función swap
  multimapa2.insert({4,40});
  multimapa2.insert({5,50});
  multimapa2.insert({6,60});
  multimapa1.swap(multimapa2);//FUNCIÓN SWAP: Permite intercambiar el contenido de un multimap con otro multimap
  cout<<"Intercambio con la función función swap(): "<<endl;
  cout<<"Nuevo multimapa1: "<<endl;
  for (auto itr = multimapa1.begin(); itr != multimapa1.end(); ++itr) { 
      cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl;  
    } 
    cout<<"Nuevo multimapa2: "<<endl;
  for (auto itr = multimapa2.begin(); itr != multimapa2.end(); ++itr) { 
      cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl;  
    } 
  multimapa2.erase(1);//FUNCIÓN ERASE: Borra elementos del conetenedor
  cout<<"Multimapa2 usando la función erase(): "<<endl;
  for (auto itr = multimapa2.begin(); itr != multimapa2.end(); ++itr) { 
      cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl;  
    } 
  cout<<"Tamaño con la función size(): "<<multimapa1.size()<<endl; //FUNCIÓNN SIZE: Devuelve el tamaño del mapa.
  cout<<"Función empty(): "<<multimapa1.empty()<<endl;//FUNCIÓN EMPTY:Devuelve si el mapa tiene elementos con un 0 o y si está vació con un 1.
  cout<<"Función find(): "<<endl;//FUNCIÓN FIND: Devuelve el iterador que se refiere a la posición donde la clave esta presnete en el mutimap.
   for (auto itr = multimapa2.find(2); itr != multimapa2.end(); ++itr) { 
      cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl;  
    }  
}
