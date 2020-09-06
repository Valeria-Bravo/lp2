#include<iostream>
using namespace std;

class A
{
    public:
    void mostrar();
};

void A::mostrar(){
	cout<<"Soy de la clase A"<<endl;
}

class B: public A  
{
};

class C: public A
{
};

class D: public B, public C
{
};

int main()
{
    D obj;
    obj.mostrar();
    return 0;
};
