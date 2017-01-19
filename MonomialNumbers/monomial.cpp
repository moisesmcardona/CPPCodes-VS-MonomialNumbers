#include "monomial.h"

//Monomial::Monomial()
//{
//	setCoeficient(1);
//	setExponent(1);
//}
Monomial::Monomial(int Coef, int Exp)
{
	setCoeficient(Coef);
	setExponent(Exp);

}
Monomial::Monomial(Monomial& monomial)
{
	setCoeficient(monomial.coef);
	setExponent(monomial.exp);
}
Monomial::~Monomial()
{
	//nothing here
}
void Monomial::setCoeficient(int Coef)
{
	coef = Coef;
}
void Monomial::setExponent(int Exp)
{
	exp = Exp;
}
void Monomial::setMonomial(int Coef, int Exp)
{
	coef = Coef;
	exp = Exp;
}
int Monomial::getCoeficient() const
{
	return this->coef;
}
int Monomial::getExponent() const
{
	return this->exp;
}
int Monomial::getResult() const
{
	return (this->coef, this->exp);
}
Monomial Monomial::operator + (const Monomial & value) const
{
	if (this->exp != value.exp)
	{
		cout << "Exponent value not same. Using value of the first monomial: " << this->exp << endl;
	}
	return (Monomial(this->coef + value.coef, this->exp));
}
Monomial Monomial::operator + (int value) const
{
	return (Monomial(this->coef + value));
}
Monomial Monomial::operator - (const Monomial & value) const
{
	if (this->exp != value.exp)
	{
		cout << "Exponent value not same. Using value of the first monomial: " << this->exp << endl;
	}
	return (Monomial(this->coef - value.coef, this->exp));
}
Monomial Monomial::operator - (int value) const
{
	return (Monomial(this->coef - value));
}
Monomial Monomial::operator * (const Monomial & value) const
{
	return (Monomial(this->coef * value.coef, this->exp + value.exp));
}
Monomial Monomial::operator * (int value) const
{
	return (Monomial(this->coef * value));
}
ostream & operator << (ostream & output, const Monomial & value)
{
	output << value.getCoeficient()  << "x^" << value.getExponent();
	return output;
}
istream & operator >> (istream & input, Monomial & value)
{
	int istreamcoef, istreamexp;
	cout << "Enter values for monomial" << endl;
	cout << "Coeficient: ";
	input >> istreamcoef;
	cout << "Exponent: ";
	input >> istreamexp;
	value.setCoeficient(istreamcoef);
	value.setExponent(istreamexp);
	return input;
}