#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class lista{
	vector <T> list;
	int tamano;
	int max;
	public:
	lista(int _tamano){
		max=_tamano;
		tamano=_tamano;
    
	}
	void agregar(T valor){ //ingresar elementos
		if(tamano>0){
			list.push_back(valor);
			--tamano;
		}
	}
	
	void llena(){ //mostrar si esta llena
		if(tamano<=0){
			cout<<"la lista esta llena"<<endl;
		}
		else{
			cout<<"te quedan "<<tamano<<" espacio"<<endl;
		}
	}
	
	void imprimir(){ //mostrar valores
		for(int i=0; i<list.size(); i++){
			cout<<list[i]<<" ";
		}
		cout<<endl;
	}
	void numero_elementos(){ //numero de elementos.
		cout<<"Numero de elementos:"<<list.size()<<endl;
	}
	void cap_max(){ //capacidad maxima
		cout<<"Maxima: "<<max<<endl;
	}
	void limpiar(){ //limpiar
		list.clear();
		tamano=0;
	}
	void ordenar()  //ordenamiento de numeros
	{  T aux;
    	for(int i=0; i<list.size(); i++){
    		for(int l=0; l<list.size(); l++){
    			if(list[i]<list[l]){
    				aux=list[l];
    				list[l]=list[i];
    				list[i]=aux;
				}
			}
		}  
	}
	T operator[](int p){
		return list[p];
	}
};
int main(){
	lista<int> nueva(5);
	int n=0;
 
	while(n!=4){
	  cout<<"1. Agregar elemento: "<<endl;
	  cout<<"2. Verificar espacio es en la lista: "<<endl;
	  cout<<"3. Ver lista: "<<endl;
	  cout<<"4. Salir: "<<endl;
    //aumentado de las ultimas funciones
    cout<<"5. Numero de elementos: "<<endl;
    cout<<"6. Capacidad maxima: "<<endl;
    cout<<"7. limpiar: "<<endl;
	  cout<<"Seleccione: "<<endl;
	  cin>>n;
	  switch (n){
	    case 1:
	    int valor; cout<<"Inserta elemento:";
      cin>>valor;	
	    nueva.agregar(valor);
	    cout<<endl;
	    break;
	    case 2:
	    nueva.llena();
	    cout<<endl;
	    break;
	    case 3:
	    nueva.ordenar();
      nueva.imprimir();
	    break;
      case 5:
      nueva.numero_elementos();
      break;
      case 6:
      nueva.cap_max();
      case 7:
      nueva.limpiar();
      break;
	    
	}
	  
	}
}
