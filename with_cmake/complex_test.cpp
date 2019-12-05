#define BOOST_TEST_MODULE complex_test
#include <boost/test/included/unit_test.hpp>
#include "complex.hpp"

BOOST_AUTO_TEST_CASE(compare)
{
    complex a{1, 2};
    complex b{1, 2};
    complex c{3, 4};

    BOOST_TEST((a == b));
    BOOST_TEST((a == c));
    BOOST_TEST((b == c));
}