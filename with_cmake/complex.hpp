#pragma once

class complex
{
public:
    complex(double, double);
    bool operator==(complex const & rhs);

    double real;
    double imag;
};