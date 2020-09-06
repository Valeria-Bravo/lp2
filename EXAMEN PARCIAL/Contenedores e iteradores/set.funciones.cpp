#include <iostream>
#include <set>
/*SET:son un tipo de contenedores en los que cada elemento debe de ser unico, su valor no se puede modificar una vez que se agrega al conjutno*/
using namespace std;
int main() {
  set <int> set1{1,2,3,4,5};
  set<int>::iterator itr; //lamando al iterator
  cout<<"Lista original: { ";
   
  cout<<"}"<<endl;for (itr = set1.begin(); itr != set1.end(); ++itr) 
    { 
        cout<< *itr<<" "; 
    }  
  cout<<"Función empty()"<<set1.empty()<<endl;
  cout<<"Función size(): "<<set1.size()<<endl;//tamaño
  cout<<"Función max_size(): "<<set1.max_size()<<endl;//muestra el mayor numero de elementos
  set<int> set2;
  set<int>::iterator itr2;
  set2.insert(10);
  set2.insert(20);
  set2.insert(30);
  cout<<"Función insert(): { ";
   for (itr2 = set2.begin(); itr2 != set2.end(); ++itr2) 
    { 
        cout<< *itr2<<" "; 
    }  
  cout<<"}"<<endl;
  set1.erase(1); //para borrar, solo colocas la posicion en la que sea borrada
  cout<<"Funcion erase(): ";
  for (itr = set1.begin(); itr != set1.end(); ++itr) 
    { 
        cout<< *itr<<" "; 
    } 
  set1.swap(set2);//intercambia elementos de los set
  cout<<"Funcion swap(): "<<endl;
  cout<<"Nuevos elementos de set1: "<<endl;
   for (itr = set1.begin(); itr != set1.end(); ++itr) 
    { 
        cout<< *itr<<" "; 
    }
    cout<<endl;
  cout<<"Nuevos elementos de set2: "<<endl;
     for (itr2 = set2.begin(); itr2 != set2.end(); ++itr2) 
    { 
        cout<< *itr2<<" "; 
    }  
    cout<<endl;
    cout<<"Tamaño de set1 antes de usar la funcion clear ():"<<set1.size()<<endl;
    set1.clear(); //limpia todo lo que venia dentro del set
    cout<<"Tamaño de set1 despues de usar la funcion clear ():"<<set1.size()<<endl;
    cout<<"Función find(): "<<endl;
    for (itr2 = set2.find(3); itr2 != set2.end(); ++itr2) 
    { 
        cout<< *itr2<<" "; 
    }  //usamos la funcion find para encontrar el elemento
    cout<<"Funcion count(), este elemento esta presente: "<<set2.count(4)<<" veces"<<endl;//funcion count, encuentra un elmeento en el set
}
