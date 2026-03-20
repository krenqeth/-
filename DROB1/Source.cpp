#include "fraction.hpp"
int main()
{
	Fraction Setnumerator(3, 10);
	Fraction Setdenominator(14, 15);

	Fraction three = Setnumerator.Sum(Setdenominator);
	std::cout << "\nOne + Two = ";
	three.Print();
	std::cout << std::endl;

	Fraction four = Setnumerator.Subtract(Setdenominator);
	std::cout << "\nOne - Two = ";
	four.Print();

	Fraction five = Setnumerator.Multiply(Setdenominator);
	std::cout << "\nOne * Two = ";
	five.Print();

	Fraction six = Setnumerator.Divide(Setdenominator);
	std::cout << "\nOne / Two = ";
	six.Print();

	return 0;
}