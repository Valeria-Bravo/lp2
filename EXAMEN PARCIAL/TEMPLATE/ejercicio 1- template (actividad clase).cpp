#include <iostream>
using namespace std;
//int Add(int x,int y) ; //Return the sum of two elements
template <typename T>
T add (T x, T y){
  return (x+y) ;
}

int main() {
  cout<<"Suma: "<<add<int> (2,3)<<endl;
}
