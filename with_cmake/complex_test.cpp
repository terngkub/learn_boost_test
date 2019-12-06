#include "complex.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(complex_test)

BOOST_AUTO_TEST_CASE(compare)
{
    complex a{1, 2};
    complex b{1, 2};
    complex c{3, 4};

    BOOST_TEST((a == b), a.str() << " != " << b.str());
    BOOST_TEST((a == c), a.str() << " != " << c.str());
    BOOST_TEST((b == c), b.str() << " != " << c.str());
}

BOOST_AUTO_TEST_SUITE_END()