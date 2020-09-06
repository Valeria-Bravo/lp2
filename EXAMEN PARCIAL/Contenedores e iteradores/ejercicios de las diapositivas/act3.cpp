#include<vector>
#include <iostream>
using namespace std;
bool palindromo(vector<int>a){
	int r=a.size()-1;
	for(int i=0; i<a.size()/2; i++, r--){
		if(a[i]!=a[r]){
			return false;
		}
	}
	return true;	
}

int main(){
	vector<int>a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(2);
	a.push_back(1);
	cout<<palindromo(a);//1 verdadero 0 false
	
}
	
