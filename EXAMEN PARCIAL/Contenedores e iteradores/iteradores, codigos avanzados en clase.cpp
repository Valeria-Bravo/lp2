#include <iostream>
#include <list>
#include <iterator>
#include<set>
#include <string>
using namespace std;
int main (){
  list <double> milista;
  for (int i=0;i<10;i++){ //0 al 9
    milista.push_back(i);
  }

  list <double>::iterator it;
  //Deferenciar un puntero
  for (it=milista.begin();it!=milista.end();it++){
  cout<<*it<<endl;
  }
  int x=90;
  int * ptr=&x;
  (*ptr)++;
  it=milista.begin(); 
  //cout<<(*it)++<<endl;
  //cout<<(*it)<<endl;
  //apuntar a posición
  auto it1=next(it,3);
  cout<<(*it1)<<endl;
  it =milista.end();
  auto it2=prev(it,1);
  cout<<(*it1)<<endl;

 //cbegin()--> como es constante, no se puede modificar
 //cend()--> igual a lo de arriba, la c significa constante
  set<string>milista3;
  

}
