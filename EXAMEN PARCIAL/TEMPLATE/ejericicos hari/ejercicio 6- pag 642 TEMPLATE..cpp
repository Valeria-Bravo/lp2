#include <iostream>
using namespace std;
/*Escriba una función de plantilla que devuelva el promedio de todos 
los elementos de una matriz. Los argumentos de la función deben ser el
 nombre de la matriz y el tamaño de la matriz (tipo int). En main (), 
 ejercite la función con matrices de tipo int, long, double y char.*/

template < class T>
T Promedio ( T arra[], int tamaño){
  T suma=0;
  T promedio;
  for (int i=0; i<tamaño; i++){
      suma=arra[i]+suma;
      promedio=suma/tamaño;
  }
  return promedio;
}
int main() {
  int arra0[4]={1,5,7,11};
  cout<<"El promedio de int es: "<<Promedio<int>(arra0,4)<<endl;
  long arra1[3]={-12323,36323,64536};
  cout<<"El promedio de long es: "<<Promedio<long>(arra1,3)<<endl;
  double arra2[3]={1.534,13.657,4.786};
  cout<<"El promedio de double es: "<<Promedio<double>(arra2,3)<<endl;
  char arra3[2]={'1','2'}; //promedio?
  cout<<"El promedio char es: "<<Promedio<char>(arra3,2)<<endl;
}
