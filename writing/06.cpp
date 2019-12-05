#define BOOST_TEST_MODULE tolerance_06
#include <boost/test/included/unit_test.hpp>
namespace utf = boost::unit_test;
namespace tt = boost::test_tools;

BOOST_AUTO_TEST_CASE(test1, * utf::tolerance(0.1415 / 3))
{
    double x = 3.141592404915836;
    BOOST_TEST(x == 3);
}