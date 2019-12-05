#define BOOST_TEST_MODULE decorator_02
#include <boost/test/included/unit_test.hpp>
namespace utf = boost::unit_test;

BOOST_AUTO_TEST_SUITE(suite1, * utf::label("trivial"))

BOOST_AUTO_TEST_CASE(test_case1)
{
    BOOST_TEST(true);
}

BOOST_AUTO_TEST_CASE(test_case2)
{
    BOOST_TEST(1 == 1);
}

BOOST_AUTO_TEST_SUITE_END()