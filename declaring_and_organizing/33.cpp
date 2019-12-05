#define BOOST_TEST_MODULE decorator_09
#include <boost/test/included/unit_test.hpp>
namespace utf = boost::unit_test;

BOOST_AUTO_TEST_CASE(test_1,
    * utf::disabled()
    * utf::description("enable only when ODBC is available"))
{
    BOOST_TEST(1 == 1);
}

BOOST_AUTO_TEST_CASE(test2,
    * utf::description("descriptions")
    * utf::description("add up"))
{
    BOOST_TEST(2 == 2);
}
