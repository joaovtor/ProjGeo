#ifndef Triangulo_h
#define Triangulo_h


#include"formaGeometrica.h"

class Triangulo : public Forma
{
public:
	Triangulo(int b, int a);

	virtual float calcArea();

private:
	int base;
	int altura;
};


#endif // !Triangulo_h
