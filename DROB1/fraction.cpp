##include "fraction.hpp"

// ===== КОНСТРУКТОР =====
Fraction::Fraction(int num, int den)
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
void Fraction::Setnumerator(int num)
{
    numerator = num;
}

void Fraction::Setdenominator(int den)
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
int Fraction::Getnumerator() const
{
    return numerator;
}

int Fraction::Getdenominator() const
{
    return denominator;
}

// ===== ОПЕРАЦИИ =====
Fraction Fraction::Sum(const Fraction& other)
{
    return Fraction(
        numerator * other.denominator + other.numerator * denominator,
        denominator * other.denominator
    );
}

Fraction Fraction::Subtract(const Fraction& other)
{
    return Fraction(
        numerator * other.denominator - other.numerator * denominator,
        denominator * other.denominator
    );
}

Fraction Fraction::Multiply(const Fraction& other)
{
    return Fraction(
        numerator * other.numerator,
        denominator * other.denominator
    );
}

Fraction Fraction::Divide(const Fraction& other)
{
    return Fraction(
        numerator * other.denominator,
        denominator * other.numerator
    );
}

// ===== PRINT =====
void Fraction::Print() const
{
    std::cout << numerator << "/" << denominator;
}