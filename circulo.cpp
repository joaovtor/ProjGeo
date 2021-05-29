#include"circulo.h"

Circulo::Circulo(int r)
{
	raio = r;
}


float Circulo::calcArea() {
	
	area = 3.14 * pow(raio, 2);
	
	return area;

	//cout << "\nArea do circulo = " << 3.14 * pow(raio, 2) << endl;
}