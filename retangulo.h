#ifndef retangulo_h
#define retangulo_h

#include"formaGeometrica.h"

class Retangulo : public Forma
{
public:
	Retangulo(int l, int a);

	virtual float calcArea();


private:
	int largura;
	int altura;
};



#endif // !retangulo_h

