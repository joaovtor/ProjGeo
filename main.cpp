#include"triangulo.h"
#include"circulo.h"
#include"retangulo.h"

int main() {

	Triangulo t(5, 8);

	Circulo c(7);

	Retangulo r(5, 8);

	cout << "\narea triangulo: " << t.calcArea() << endl;

	cout << "\narea circulo: " << c.calcArea() << endl;

	cout << "\narea retangulo: " << r.calcArea() << endl;

}