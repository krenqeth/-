#ifndef _FRACTION_HPP
#define _FRACTION_HPP

#include <iostream>

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    // Конструктор
    Fraction(int num = 0, int den = 1);

    // set
    void Setnumerator(int num);
    void Setdenominator(int den);

    // get
    int Getnumerator() const;
    int Getdenominator() const;

    // операции
    Fraction Sum(const Fraction& other);
    Fraction Subtract(const Fraction& other);
    Fraction Multiply(const Fraction& other);
    Fraction Divide(const Fraction& other);

    void Print() const;
};

#endif