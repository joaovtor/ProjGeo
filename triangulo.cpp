#include"triangulo.h"

Triangulo::Triangulo(int b, int a)
{
	altura = a;
	base = b;

}

float Triangulo::calcArea()
{
	area = (base * altura) / 2;

	return area;
}
