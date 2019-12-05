#define BOOST_TEST_MODULE tolerance_05
#include <boost/test/included/unit_test.hpp>
#include <boost/optional.hpp>
#include <boost/optional/optional_io.hpp>

BOOST_AUTO_TEST_CASE(test, * boost::unit_test::tolerance(0.02))
{
    double d1 = 1.00, d2 = 0.99;
    boost::optional<double> o1 = 1.00, o2 = 0.99;

    BOOST_TEST(d1 == d2);
    BOOST_TEST(o1 == o2);
    BOOST_TEST(o1 == d2);
    BOOST_TEST(*o1 == *o2);
}