#include "retangulo.h"

Retangulo::Retangulo(int l, int a)
{
	largura = l;
	altura = a;
}

float Retangulo::calcArea()
{
	area = largura * altura;

	return area;
}
