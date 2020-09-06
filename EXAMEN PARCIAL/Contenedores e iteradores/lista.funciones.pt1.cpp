#include <iostream>
#include <list>
using namespace std;
/*FUNCIONES DE LIST A MOSTRAR: empty, size, max_size, front, back, push:back, 
push_front, pop_back, pop_front*/
int main() {
  cout<<"------ FUNCIONES DE LISTAS ------"<<endl;
  bool var1;
  list<int> lista1 = {1, 2, 3, 4, 5};
  cout<<"Lista: { ";
  for(auto x:lista1){
    cout<<x<<" ";
  }
  cout<<" } "<<endl;
  var1=lista1.empty(); // FUNCION EMPTY: retorna si esta vacio o no a traves de 0 o 1
  cout << "Respuesta (empty):"<<lista1.empty() << endl; // salida 0 de empty porque no esta vacia, ene l caso de que estuviera vacía retornaría 1.
  cout<<"Tamaño de la lista (size): "<<lista1.size()<<endl; //FUNCION SIZE: Devuelve el tamaño de la lista
  cout<<"Numero maximo (max_size):"<<sizeof(lista1.max_size())<<endl; // FUNCION MAX SIZE: Devuelve el numero mayor de la lista, pero trabaja exclusivamente con bits, asi que que usa "sizeof" para colocar el valor real.
  cout<<"Primer valor (front): "<<lista1.front()<<endl; //FUNCION FRONT: una referecnia al primer valor de la lista
  cout<<"Último valor (back): "<<lista1.back()<<endl;//FUNCION BACK: una referencia al ultimo valor de la lista
  cout<<"Lista antes la función push back y push front: { ";
  for (auto x:lista1)
    cout<<x<<" ";
    cout<<"}"<<endl;
   lista1.push_back(6);//FUNCION PUSH_BACK: Permite agregar un elemento de la lista al final
    cout<<"Lista despues de usar la funcion Push back: ";
    for (auto itr=lista1.begin();itr!=lista1.end();itr++) //mostrar la nueva lista
      cout<<*itr<<" ";
    cout<<endl;
    lista1.push_front(0); //FUNCION PUSH FRONT: agregamos un elemento de la lista al inicio
    cout<<"Lista después de usar la función Push front: ";
    for (auto itr =lista1.begin(); itr != lista1.end(); itr++) //mostrar la nueva lista
        cout << *itr << " "; 
  cout<<endl;
   lista1.push_back(7);//agregamos un elemento de la lista al final como ejemplo para mostarar la sigueinte función
   lista1.pop_back();// FUNCION POP BACK: Permite eliminar el elemento que anteriormente ingresamos atrás
    cout<<"Pop back: ";
    for (auto itr=lista1.begin();itr!=lista1.end();itr++)
      cout<<*itr<<" ";
    cout<<endl;
    lista1.push_front(-1); //agregamos un elemento de la lista al inicio como ejemplo para mostrar la siguiente función
    lista1.pop_front(); //FUNCION POP FRONT: eliminamos el elemento que anetiormente ingresamos adelante
    cout<<"Pop front: ";
    for (auto itr =lista1.begin(); itr != lista1.end(); itr++) 
        cout << *itr << " "; 
    cout<<endl;
    cout<<"----------------------------------------------------"<<endl;
    /*insert:Insertar los elementos en cualquier posición de la lista
esta funcion toma 3 elementos: posicion donde se insertaran, numero de elementos a insertar y el valor para insertar
erase: Eliminar elementos de un contenedor de listas, se usa de dos maneras: una es la posición que sería un parámetro donde se elimina un solo elemento; primero y ultimo que son dos parametros donde se borran elementos de un rango.
merge: combina dos listas en una*/ 
 cout<<"---Funciones: insert, erase y merge---"<<endl;
   list <int> lista2;
   lista2.assign(3,2); //assign, insertas multiples numeros
   list<int>::iterator it=lista2.begin();//inicia el iterador de lista al comienzo
   advance(it, 2); //iterador en la posicion que indica (1 elemento)
  lista2.insert(it, 5); //FUNCION INSERT
  lista2.insert(it,2,7);
   cout << "Lista usando insert(): { "; 
    for (list<int>::iterator i = lista2.begin(); 
         i != lista2.end(); 
         i++) 
        cout << *i << " "; 
        cout << "}"<<endl;  
  cout<<"Lista original sin la función 'erase': {";
  for(auto x:lista2){
    cout<<x<<" ";
  }
  cout<<" }"<<endl;
  //primera forma de usar erase, por elemento
  list<int>::iterator itr = lista2.begin(); 
  lista2.erase(itr);//FUNCION ERASER
  cout<<"Lista usando la primera funcionalidad de'erase': { "; 
  for (auto itr =lista2.begin(); //contador par mostrar la lista
         itr !=lista2.end(); itr++) { 
        cout << *itr << " "; 
    } 
  cout<<"}"<<endl;
  //segunda forma de usar erase, por parámetros
  list<int>::iterator itr1, itr2; // creando iteradores para la lista
    itr1 = lista2.begin(); 
    itr2 = lista2.begin(); 
    advance(itr2,3);//se incrementa el it2 para 3 posiciones
    lista2.erase(itr1,itr2);
    cout<<"Lista usando la segunda funcionalidad de 'erase':{ ";
    for (auto itr = lista2.begin(); 
         itr != lista2.end(); itr++) { 
        cout << *itr << " "; 
    } 
    cout<<"}"<<endl;
   list <int> lista3={10,20,30}; ///declaracion de otra lista para la siguiente función
   lista3.merge(lista2);//FUNCION MERGE
   cout<<"Lista combinada con la funcion 'merge': {";
  for (auto it =lista3.begin(); it != lista3.end(); ++it)  //contador para mostrar
        cout << *it << " "; 
  cout<<"}"<<endl;
}
