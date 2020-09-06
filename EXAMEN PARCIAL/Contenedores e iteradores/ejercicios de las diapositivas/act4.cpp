#include<vector>
#include<set>
#include<iostream>
using namespace std;
set<int>twice(vector<int>a){
	set<int>def;
	vector<int>contador;
	for(int i=0; i<a.size(); i++){
		int cont=0;
		for(int  j=0; j<a.size(); j++){
			if(a[i]==a[j]){
				cont++;
			}
		}
		if(cont==2){
			contador.push_back(a[i]);
			a[i]='\0';
		}
	}
	
	for(int g=0; g<contador.size(); g++){
		def.insert(contador[g]);
	}
	return(def);
}
int main(){
	vector<int>r;
	r.push_back(1);
	r.push_back(3);
	r.push_back(1);
	r.push_back(4);
	r.push_back(3);
	r.push_back(7);
	r.push_back(-2);
	r.push_back(0);
	r.push_back(7);
	r.push_back(-2);
	r.push_back(-2);
	r.push_back(1);
	set<int>final=twice(r);
	set <int> :: iterator itr; 
    for (itr =final.begin(); itr != final.end(); ++itr) { 
        cout<<*itr<<" "; 
    } 
	return 0;
}
