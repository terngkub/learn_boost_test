#define BOOST_TEST_MODULE boost_test_macro_workaround
#include <boost/test/included/unit_test.hpp>
#include <sstream>

BOOST_AUTO_TEST_CASE(test_logical_not_allowed)
{
    BOOST_TEST((true && true));
}

BOOST_AUTO_TEST_CASE(test_ternary)
{
    int a = 1;
    int b = 2;
    BOOST_TEST((a + 1 == b ? true : false));
}