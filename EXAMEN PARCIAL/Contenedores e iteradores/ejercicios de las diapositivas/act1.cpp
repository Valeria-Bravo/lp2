#include<set>
#include <iostream>
#include <vector>
#include<string>
using namespace std;
int maxlength(set<string>a){
	if(false!=a.empty()){
		return 0;
	}
	vector<string>aux;
	set<string>::iterator it;
	for(it=a.begin();it!=a.end();it++){
		aux.push_back(*it);
	}
	
	string res;
	for(int i=0; i<aux.size(); i++){
    	for(int l=0; l<aux.size(); l++){
    		if(aux[i].size()<aux[l].size()){
    			res=aux[l];
    			aux[l]=aux[i];
    			aux[i]=res;
			}
		}
	}
	return (aux[aux.size()-1].size());
}
int main(){
	set<string> pal;
	pal.insert("hola");
	pal.insert("comojj");
	pal.insert("loro");
	pal.insert("demente");
	cout<<maxlength(pal);
	set<string> del;
	cout<<maxlength(del);
	return 0;
}
