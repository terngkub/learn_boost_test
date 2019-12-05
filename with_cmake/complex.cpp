#include "complex.hpp"

complex::complex(double real, double imag)
    : real(real)
    , imag(imag)
{}

bool complex::operator==(complex const & rhs)
{
    return real == rhs.real && imag == rhs.imag;
}