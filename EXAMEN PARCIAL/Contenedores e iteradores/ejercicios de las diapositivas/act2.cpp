#include<map>
#include<iostream>
using namespace std;
map<string, int> reverse(map<int,string>&a){
	map<int,string>::iterator it;
	map<string,int>aux;
	for(it=a.begin();it!=a.end();it++){
		aux[it->second]=it->first;
	}
	return(aux);
	
}
int main(){
	map<int,string>ex;
	ex[0]="a";
	ex[1]="b";
	ex[2]="c";
	map<string,int>::iterator it2;
	map<string,int>nuevo=reverse(ex);
	for(it2=nuevo.begin();it2!=nuevo.end();it2++){
		cout<<it2->first<<" "<<it2->second<<endl;
	}
	return 0;
}
