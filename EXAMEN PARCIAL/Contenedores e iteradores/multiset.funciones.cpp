#include <iostream>
#include <set>
/*MULTISET: son un tipo de contenedores asociativos similares al conjunto, con la excepción de que varios elementos pueden tener los mismos valores.*/
using namespace std;
int main() {
  multiset <int,greater<double>> multiset1{1,2,3,4,5};//greater se usa en multiset
  multiset <int,greater<double>>::iterator itr;
  cout<<"Lista original: { ";
  for (itr = multiset1.begin(); itr != multiset1.end(); ++itr) 
    { 
        cout<<*itr<<" "; 
    } 
    cout <<"}"<<endl;
  cout<<"Funcion empty(): "<<multiset1.empty()<<endl;
  cout<<"Función size(): "<<multiset1.size()<<endl;//tamaño
  cout<<"Función max_size(): "<<multiset1.max_size()<<endl;//muestra el mayor numero de elementos
  multiset<int,greater<double>> multiset2;
  multiset<int,greater<double>>::iterator itr2;
  multiset2.insert(10);
  multiset2.insert(20);
  multiset2.insert(30);
  cout<<"Función insert(): { ";
   for (itr2 = multiset2.begin(); itr2 != multiset2.end(); ++itr2) 
    { 
        cout<< *itr2<<" "; 
    }  
  cout<<"}"<<endl;
  multiset1.erase(1); //para borrar, solo colocas la posicion en la que sea borrada
  cout<<"Funcion erase(): ";
  for (itr = multiset1.begin(); itr != multiset1.end(); ++itr) 
    { 
        cout<< *itr<<" "; 
    } 
  multiset1.swap(multiset2);//intercambia elementos de los set
  cout<<"Funcion swap(): "<<endl;
  cout<<"Nuevos elementos de set1: "<<endl;
   for (itr = multiset1.begin(); itr != multiset1.end(); ++itr) 
    { 
        cout<< *itr<<" "; 
    }
    cout<<endl;
  cout<<"Nuevos elementos de set2: "<<endl;
     for (itr2 = multiset2.begin(); itr2 != multiset2.end(); ++itr2) 
    { 
        cout<< *itr2<<" "; 
    }  
    cout<<endl;
    cout<<"Tamaño de set1 antes de usar la funcion clear ():"<<multiset1.size()<<endl;
    multiset1.clear(); //limpia todo lo que venia dentro del set
    cout<<"Tamaño de set1 despues de usar la funcion clear ():"<<multiset1.size()<<endl;
    cout<<"Función find(): ";
    for (itr2 = multiset2.find(3); itr2 != multiset2.end(); ++itr2) 
    { 
        cout<< *itr2<<" "; 
    } 
    cout<<endl; //usamos la funcion find para encontrar el elemento
    cout<<"Funcion count(), este elemento esta presente: "<<multiset2.count(4)<<" veces"<<endl;//funcion count, encuentra un elmeento en el set
}

