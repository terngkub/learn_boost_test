#define BOOST_TEST_MODULE boost_test_macro3
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test_op_reportings)
{
    int a = 13, b = 12;
    BOOST_TEST(a == b);
    BOOST_TEST(a < b);
    BOOST_TEST(a - 1 < b);
    BOOST_TEST(b > a - 1);
}