#include "number.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(number_test)

BOOST_AUTO_TEST_CASE(compare)
{
    number a{1};
    number b{1};
    number c{2};

    BOOST_TEST((a == b));
    BOOST_TEST((a == c));
    BOOST_TEST((b == c));
}

BOOST_AUTO_TEST_SUITE_END()