#include <map>
#include <string>
#include <iterator>
#include <iostream>
using namespace std;
map<string,int> reverse (map<int,string> &a){ //funcion
   map<int,string>::iterator it;
   map<string,int> aux;
   for (it=a.begin(); it!=a.end();it++){
     aux[it->second]=it->first;
   }
   return aux;
}

int main() {
  map<int, string> mapa1;
  mapa1[1]="a";
  mapa1[2]="b";
  mapa1[3]="c";
  map<string,int>::iterator it2;
  map<string,int> nuevo=reverse(mapa1);
  for (it2=nuevo.begin(); it2!=nuevo.end();it2++){
    cout<<it2->first<<" "<<it2->second<<endl;
	}
  return 0;
}
