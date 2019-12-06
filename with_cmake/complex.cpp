#include "complex.hpp"
#include <sstream>

complex::complex(double real, double imag)
    : real(real)
    , imag(imag)
{}

bool complex::operator==(complex const & rhs) const
{
    return real == rhs.real && imag == rhs.imag;
}

std::string complex::str() const
{
    std::stringstream ss;
    ss << real << " + " << imag << 'i';
    return ss.str();
}