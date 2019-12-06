#pragma once
#include <string>

class complex
{
public:
    complex(double, double);
    bool operator==(complex const & rhs) const;
    std::string str() const;

private:
    double real;
    double imag;
};