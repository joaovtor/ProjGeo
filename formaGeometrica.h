#ifndef formaGeometrica_h
#define formaGeometrica_h

#include<cmath>
#include<iostream>
using namespace std;

class Forma
{
public:
	Forma();
	
	virtual float calcArea() = 0;

protected:
	float area;
};




#endif // !formaGeometrica_h



