#include <iostream>
using namespace std;
//int ArraySum(int *pArr, int arrSize); //Returns the sum of array elements
template<class T>
T arraySum(T a[], int arrasize)
{	
  T suma;
	for(int i=0; i<arrasize; i++)
	{
		suma=a[i]+suma;
	}
  return suma;
}

int main() {
  int a[5]={1,2,3,4,5};
  cout<<"La suma es: "<<arraySum<int>(a,5);

}
