#include <iostream>
#include <vector>
using namespace std;
/* VECTOR: Son iguales a las matrices dinámicas con la capacidad de cambiar su tamaño automáticamente cuando se inserta o elimina un elemento*/
int main (){
  //operator []: Hace referencia al elemento presente en la posición dada dentro del operador.
  vector <int> vector1={1,2,3,4,5};
  cout<<"Vector original: {";
  for (auto itr=vector1.begin(); itr<vector1.end(); itr++){
    cout<<*itr<<" ";
  }//el auto es para que reconozca el itr y asi no tener que declararlo antes como iterador
  cout<<"}"<<endl;
  cout<<"Operator []: "<<vector1[1]<<endl;
  cout<<"at(): "<<vector1.at(2)<<endl;
  cout<<"Funcion front (): "<<vector1.front()<<endl;
  cout<<"Funcion back (): "<<vector1.back()<<endl;
  auto it = vector1.insert(vector1.end(),40);//solo se puede o adelante o atras
  vector1.insert(it,20);
  vector1.insert(it,30);
  cout<<"Vector funcion insert():{ ";
  for (auto it = vector1.begin(); it != vector1.end(); ++it) 
        cout << *it << " ";
  cout<<"}"<<endl; 
  it=vector1.begin();//como acceder a otra posicion
  vector1.erase(it);//FUNCION ERASE
  cout<<"Vector funcion erase: {";
   for (auto it = vector1.begin(); it != vector1.end(); ++it) 
        cout << *it << " "; 
  cout<<"}"<<endl;
  cout<<"Tamaño de vector1 antes de usar la funcion clear(): "<<vector1.size()<<endl;
  vector1.clear();
  cout<<"Tamaño de vector1 despues de usar la funcion clear(): "<<vector1.size()<<endl;
  vector <int> vector2={10,20,30};
  vector <int> vector3={40,50,60};
  cout<<"Vector2: { ";
  for (auto it = vector2.begin(); it != vector2.end(); ++it) 
        cout << *it << " ";
  cout<<"}"<<endl;
  cout<<"Vector3: { ";
  for (auto it = vector3.begin(); it != vector3.end(); ++it) 
        cout << *it << " ";
  cout<<"}"<<endl;
  vector2.swap(vector3);//solo se puede usar cuando ambos vectores tienen el mismo tipo de dato, sirven para intercmabiar los valores de ambas listas
  cout<<"Nuevo vector2: { ";
  for (auto it = vector2.begin(); it != vector2.end(); ++it) 
        cout << *it << " ";
  cout<<"}"<<endl;
  cout<<"Nuevo vector3: { ";
  for (auto it = vector3.begin(); it != vector3.end(); ++it) 
        cout << *it << " ";
  cout<<"}"<<endl;
  //push_front no me compila xd: NO EXISTE EL PUSH FRONT EN VECTORES PENDEJA
  vector3.push_back(70);
  vector3.push_back(80);//ingresa un nuevo elemento
  vector3.pop_back();//borra el elemento anteriormente ingresado
  cout<<"Vector3 con la función push back: { ";
  for (auto it = vector3.begin(); it != vector3.end(); ++it) 
        cout << *it << " ";
  cout<<"}"<<endl;

}
