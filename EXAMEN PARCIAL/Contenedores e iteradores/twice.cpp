#include <iostream>
#include <vector>
#include <set>
using namespace std;
set <int> twice (vector <int>a){
  set <int>set1;
  vector<int> vector1;
  for (int i=0; i<a.size();i++){
    int cont=0;
  for (int j=0; j<a.size();j++){
    if (a[i]==a[j]){
    cont++;
    }
   }
   if (cont==2){
     vector1.push_back(a[i]);
     a[i]='\0';//que es eso?
   }
  }
  for(int g=0; g<vector1.size(); g++){
    set1.insert(vector1[g]);
  }
  return set1;
}
int main() {
  vector <int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(2);
  v.push_back(1);
  set<int>final=twice(v);//para ques final
  for (auto itr=final.begin(); itr != final.end(); ++itr) { 
        cout<<*itr<<" "; 
  }

}
