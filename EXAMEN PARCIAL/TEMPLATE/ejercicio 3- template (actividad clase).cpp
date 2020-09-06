#include <iostream>
using namespace std;
template<class T>
//int Max(int *pArr, int arrSize) ; //Return the largest element in the array


T Max(T a[], int arrasize)
{	
  T maximo;
	for(int i=0; i<arrasize; i++)
	{
		if (a[i]>maximo)
    {
      maximo=a[i];
    }
	}
  
	return maximo;
}

int main() {
  int a[5]={1,2,3,4,5};
   cout<<"El numero maximo es: "<<Max<int>(a,5);
}
