#include <iostream>
/*Cree una clase Pa�s, Estado, Ciudad y Aldea y organ�celos de forma jer�rquica*/
using namespace std;

class Country 
{
  };
  
class State : public Country {
	
  };
  
class City : public Country {
	
  };
  
class Village : public Country { 
	
  };
