#ifndef circulo_h
#define circulo_h

#include"formaGeometrica.h"

class Circulo : public Forma
{
public:
	Circulo(int r);

	virtual float calcArea();

private:
	int raio;
};



#endif // !circulo_h
