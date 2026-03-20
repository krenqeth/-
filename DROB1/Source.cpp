#include "fraction.hpp"

int main()
{
    Fraction one(3, 10);
    Fraction two(14, 15);

    Fraction three = one.Sum(two);
    std::cout << "One + Two = ";
    three.Print();
    std::cout << std::endl;

    Fraction four = one.Subtract(two);
    std::cout << "One - Two = ";
    four.Print();
    std::cout << std::endl;

    Fraction five = one.Multiply(two);
    std::cout << "One * Two = ";
    five.Print();
    std::cout << std::endl;

    Fraction six = one.Divide(two);
    std::cout << "One / Two = ";
    six.Print();
    std::cout << std::endl;

    return 0;
}