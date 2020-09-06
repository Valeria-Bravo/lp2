#include<vector>
#include<iostream>
using namespace std;
void addstar(vector<string>&a){
	vector<string>aux;
	for(int i=0; i<a.size(); i++){
		aux.push_back("*");
		aux.push_back(a[i]);
	}
	aux.push_back("*");
	a.clear();
	a=aux;
	
}
int main(){
	vector<string>prueba;
	prueba.push_back("the");
	prueba.push_back("quick");
	prueba.push_back("brown");
	prueba.push_back("fox");
	addstar(prueba);
	for(int i=0; i<prueba.size(); i++){
		cout<<prueba[i]<<" ";
	}
}
