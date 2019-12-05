#define BOOST_TEST_MODULE tolerance_03
#include <boost/test/included/unit_test.hpp>
namespace utf = boost::unit_test;

double x = 10.000000;
double d = 0.000001;

BOOST_AUTO_TEST_CASE(passing, * utf::tolerance(0.0001))
{
    BOOST_TEST(x == x + d);
    BOOST_TEST(x >= x + d);
    BOOST_TEST(d == .0);
}

BOOST_AUTO_TEST_CASE(failing, * utf::tolerance(0.0001))
{
    BOOST_TEST(x - d < x);
    BOOST_TEST(x - d != x);
    BOOST_TEST(d > .0);
    BOOST_TEST(d < .0);
}
