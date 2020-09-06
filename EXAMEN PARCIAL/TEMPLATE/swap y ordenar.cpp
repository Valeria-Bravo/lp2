#include <iostream>
using namespace std;
template <typename T>
void swap(T *xp, T *yp)  
{  
    T aux = *xp;  
    *xp = *yp;  
    *yp = aux;  
}  
  
template <typename A>
void ordenar(A arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}

int main(){
  int lista[3]={2,1,3};
  cout<<"Lista original:"<<endl;
  for (int i =0; i<3;i++){
  cout<<lista[i]<<' ';
  }
  cout<<endl;
  ordenar(lista,3);
  cout<<"Lista cambiada: "<<endl;
  for (int i =0; i<3;i++){
  cout<<lista[i]<<' ';
  }
  cout<<endl;
}
