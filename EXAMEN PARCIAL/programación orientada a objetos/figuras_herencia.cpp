#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

class Figura{
 	protected:
 		double area;
 		double perimetro;
 	public:
	~Figura(){}
	void show(){
        cout<<"El área es: "<<area<<endl;
        cout<<" El perímetro: "<<perimetro<<endl;
    }
	//virtual void presentacion ()=0;
};

class square:public Figura{
  private:
    double lado;
  public:
    square(double l){
        lado=l;
        area=l*l;
        perimetro=l+l+l+l;
    }
    void show_areaPerimetro(){
        cout<<area<<endl;
        cout<<perimetro<<endl;
    }
};

class circle:public Figura{
    private:
    	double radio;
    public:
    circle (double r){
    	radio=r;
    	area=pow(r,2)*3.14;
    	perimetro=2*3.14*r;
	}
	void show_areaPerimetro(){
        cout<<area<<endl;
        cout<<perimetro<<endl;
    }

};

class rectangule:public Figura{
  private:
    double altura;
    double base;
  public:
    rectangule(int b, int al){
        base=b;
        altura=al;
        area=b*al;
        perimetro=2*(b+al);
    }
    void show_areaPerimetro(){
        cout<<area<<endl;
        cout<<perimetro<<endl;
    }
};

class elipse:public Figura{
	private:
		int semieje1;
		int semieje2;
		int s3;
		int s4;

	public:
    elipse (int s1, int s2){
		semieje1=s1;
		semieje2=s2;
		area=3.14*s1*s2;
		perimetro=2*3.14 *sqrt((pow (s1,2)+pow(s2,2))/2);
	
		
    }
	void show_areaPerimetro(){
        cout<<area<<endl;
        cout<<perimetro<<endl;
    }

};

int main()
{
    square a(6);
    a.show();

    circle b(1);
    b.show();

    rectangule c(5,3);
    c.show();

    elipse d(4,1);
    d.show();
    return 0;
}
