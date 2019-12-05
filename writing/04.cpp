#define BOOST_TEST_MODULE tolerance_02
#include <boost/test/included/unit_test.hpp>
namespace utf = boost::unit_test;
namespace tt = boost::test_tools;

BOOST_AUTO_TEST_CASE(test1, * utf::tolerance(0.00001))
{
    double x = 10.0000000;
    double y = 10.0000001;
    double z = 10.001;

    BOOST_TEST(x == y);
    BOOST_TEST(x == y, tt::tolerance(0.0));

    BOOST_TEST(x == z);
    BOOST_TEST(x == z, tt::tolerance(0.001));
}