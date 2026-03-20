#ifndef _FRACTION_HPP
#define _FRACTION_HPP
#include <iostream>
#include <string>

class Fraction
{
public:

	Fraction(int num, int den);
	Fraction Sum(const Fraction& other);
	Fraction Subtract(const Fraction& other);
	Fraction Multiply(const Fraction& other);
	Fraction Divide(const Fraction& other);

	void Print()
	{
		std::cout << numerator << "/" << denominator;
	}

private:
	void Setnumerator(int one);
	{
		numenator = one;
	}

	void Setdenominator(int two);
	{
		denominator = two;
	}

	int Getnumerator() const
	{
		return numerator;
	}

	int Getdenominator() const
	{
		return denominator;
	}

private:
	int numerator;
	int denominator;



};
#endif