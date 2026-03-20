#include "Fraction.hpp"

Fraction::Fraction(int num, int den) : numerator(num), denominator(den)
{


}

Fraction Fraction::Sum(const Fraction& other)
{
	int newNumerator = numerator * other.denominator + other.numerator * denominator;
	int newDenominator = denominator * other.denominator;

	return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::Subtract(const Fraction& other)
{
	int newNumerator = numerator * other.denominator - other.numerator * denominator;
	int newDenominator = denominator * other.denominator;

	return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::Multiply(const Fraction& other)
{
	int newNumerator = numerator * other.numerator;
	int newDenominator = denominator * other.denominator;

	return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::Divide(const Fraction& other)
{
	int newNumerator = numerator / other.numerator;
	int newDenominator = denominator / other.denominator;


	return Fraction(newNumerator, newDenominator);
}

void Fraction::Setnumerator(int one)
{
	if (numerator < 0)
	{
		std::cout << "Number can't be zero";
		return;
	}
}

void Fraction::Setdenominator(int two)
{
	if (numerator < 0)
	{
		std::cout << "Number can't be zero";
		return;
	}


}
