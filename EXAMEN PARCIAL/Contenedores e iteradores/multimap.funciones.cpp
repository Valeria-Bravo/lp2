#include <iostream>
#include <map>
#include <string>
using namespace std;
/* Funciones de MULTIMAP: insert(), max_size(), count(), clear(), swap(), erase(), find(), size(), empty()*/
int main() {
  //DIFERENCIA ENTRE MAP Y MULTIMAP: multimap almacena pares de clave y valor, el map solo almcenar� cada valor una vez para una clave especifica
  multimap<int,int> multimapa1;
  multimapa1.insert({1,10});//FUNCI�N INSERT: Inserta elementos en el contenedor de multimap.
  multimapa1.insert({2,20});
  multimapa1.insert({3,30});
  cout<<"Mapa original con la funci�n insert(): "<<endl;
  for (auto itr = multimapa1.begin(); itr != multimapa1.end(); ++itr) { 
      cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl;  
    } 
  cout<<"Funci�n max_size(): "<<multimapa1.max_size()<<endl;//FUNCI�N MAX_SIZE: Devuelve el n�mero maximo de elementos que el multimap puede tener
  cout<<"Funci�n count(): 2 esta presente -"<<multimapa1.count(2)<<" - veces"<<endl; //FUNCI�N COUNT:Devuelve el n�mero de veces que una lcave esta presente en el mapa (clave, m�s no valor) 
  multimap <int,int> multimapa;//creamos otro multimapa para demostrar la funci�n clear, a trav�s de su tama�o
  multimapa.insert({4,5});
  multimapa.insert({6,7});
  cout<<"Tama�o del multimapa1 antes de usar la funci�n clear(): "<<multimapa.size()<<endl;
  multimapa.clear();//FUNCI�N CLEAR: Elimina todos los elementos del contenedor indicado.
  cout<<"Tama�o del multimapa1 despu�s de usar la funci�n clear(): "<<multimapa.size()<<endl;
  multimap <int,int> multimapa2; //creamos otro mapa para la funci�n swap
  multimapa2.insert({4,40});
  multimapa2.insert({5,50});
  multimapa2.insert({6,60});
  multimapa1.swap(multimapa2);//FUNCI�N SWAP: Permite intercambiar el contenido de un multimap con otro multimap
  cout<<"Intercambio con la funci�n funci�n swap(): "<<endl;
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
  multimapa2.erase(1);//FUNCI�N ERASE: Borra elementos del conetenedor
  cout<<"Multimapa2 usando la funci�n erase(): "<<endl;
  for (auto itr = multimapa2.begin(); itr != multimapa2.end(); ++itr) { 
      cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl;  
    } 
  cout<<"Tama�o con la funci�n size(): "<<multimapa1.size()<<endl; //FUNCI�NN SIZE: Devuelve el tama�o del mapa.
  cout<<"Funci�n empty(): "<<multimapa1.empty()<<endl;//FUNCI�N EMPTY:Devuelve si el mapa tiene elementos con un 0 o y si est� vaci� con un 1.
  cout<<"Funci�n find(): "<<endl;//FUNCI�N FIND: Devuelve el iterador que se refiere a la posici�n donde la clave esta presnete en el mutimap.
   for (auto itr = multimapa2.find(2); itr != multimapa2.end(); ++itr) { 
      cout <<"{ "<< itr->first 
             <<" , "<< itr->second <<" }"<<endl;  
    }  
}
