#include <iostream>
#include "monomial.h"
using namespace std;

void main()
{
	Monomial A, B, C, D, E;
	cin >> A;
	cin >> B;
	C = A * B;
	cout << A << " * " << B << " = " << C << endl;
	D = A + B;
	cout << A << " + " << B << " = " << D << endl;
	E = A - B;
	cout  << A << " - " << B << " = " << E ;
	system("pause");
}