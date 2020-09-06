#include <iostream>
#include<math.h>
using namespace std;
template <typename T>
T Max (T *pArr, int arrasize){
  T max=0;
  for( int i=0; i<arrasize; i++){
    if (pArr[i]>max){
      max=pArr[i];
    }
    cout<<pArr[i]<<endl;
  }
    return max;
}

template <> //especializada
double Max <double>(double *pArr, int arrasize){
  double max=0;
  for( int i=0; i<arrasize; i++){
    if (pArr[i]>max){
      max=pArr[i];
    }
    cout<<typeid(pArr[i]).name()<<endl; // es consecuencia del typeid es que me aparece las letras en el main
  }
    return (max*max);

}
int main() {
  int sz=3; 
  float* arr=new float (sz);
  arr[0]=3.14;
  arr[1]=1.14;
  arr[2]=2.13;
  cout<<"Maximo: "<<Max(arr,sz)<<endl;
  int sz2=3;
  double* arr2=new double (sz2);
  arr2[0]=5.14;
  arr2[1]=6.14;
  arr2[2]=3.13;
  cout<<"Maximo 2: "<<Max(arr2,sz2)<<endl;
}
