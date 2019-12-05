#define BOOST_TEST_MODULE decorator_01
#include <boost/test/included/unit_test.hpp>
namespace utf = boost::unit_test;

BOOST_AUTO_TEST_CASE(test_case1, * utf::label("trivial"))
{
    BOOST_TEST(true);
}

BOOST_AUTO_TEST_CASE(test_case2,
    * utf::label("trivial")
    * utf::label("cmp")
    * utf::description("testing equality of ones"))
{
    BOOST_TEST(1 == 1);
}