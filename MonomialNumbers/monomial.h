#ifndef MONOMIAL_H
#define MONOMIAL_H
#include <iostream>
using namespace std;
class Monomial{
private:
	int coef;
	int exp ;
public:
	//Monomial();
	Monomial(int Coef = 0, int Exp= 0);
	Monomial(Monomial& monomial);
	~Monomial();
	void setCoeficient(int Coef);
	void setExponent(int Exp);
	void setMonomial(int Coef, int Exp);
	int getCoeficient() const;
	int getExponent() const;
	int getResult() const;
	Monomial operator + (const Monomial &) const;
	Monomial operator + (int monomial) const;
	Monomial operator - (const Monomial &) const;
	Monomial operator - (int monomial) const;
	Monomial operator * (const Monomial &) const;
	Monomial operator * (int monomial) const;
	friend ostream & operator << (ostream & output, const Monomial &);
	friend istream & operator >> (istream & output,  Monomial &);

};
#endif