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
    Fraction(int num = 0, int den = 1)
    {
        if (den == 0)
        {
            std::cout << "Error: denominator = 0! Set to 1\n";
            den = 1;
        }
        numerator = num;
        denominator = den;
    }

    // ===== SET =====
    void Setnumerator(int num)
    {
        numerator = num;
    }

    void Setdenominator(int den)
    {
        if (den == 0)
        {
            std::cout << "Error: denominator = 0! Set to 1\n";
            denominator = 1;
        }
        else
        {
            denominator = den;
        }
    }

    // ===== GET =====
    int Getnumerator() const
    {
        return numerator;
    }

    int Getdenominator() const
    {
        return denominator;
    }

    // ===== ОПЕРАЦИИ =====
    Fraction Sum(const Fraction& other)
    {
        return Fraction(
            numerator * other.denominator + other.numerator * denominator,
            denominator * other.denominator
        );
    }

    Fraction Subtract(const Fraction& other)
    {
        return Fraction(
            numerator * other.denominator - other.numerator * denominator,
            denominator * other.denominator
        );
    }

    Fraction Multiply(const Fraction& other)
    {
        return Fraction(
            numerator * other.numerator,
            denominator * other.denominator
        );
    }

    Fraction Divide(const Fraction& other)
    {
        return Fraction(
            numerator * other.denominator,
            denominator * other.numerator
        );
    }

    // ===== ВЫВОД =====
    void Print() const
    {
        std::cout << numerator << "/" << denominator;
    }
};

#endif