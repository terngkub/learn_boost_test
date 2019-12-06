#include "number.hpp"

number::number(int a)
    : a(a)
{}

bool number::operator==(number const & rhs)
{
    return a == rhs.a;
}