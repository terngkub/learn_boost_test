#define BOOST_TEST_MODULE decorator_04
#include <boost/test/included/unit_test.hpp>
namespace utf = boost::unit_test;

BOOST_AUTO_TEST_CASE(test1, * utf::label("l1"))
{
    BOOST_TEST(false);
}

BOOST_AUTO_TEST_CASE(test2,
    * utf::label("l1")
    * utf::label("l2"))
{
    BOOST_TEST(false);
}

BOOST_AUTO_TEST_CASE(test3)
{
    BOOST_TEST(false);
}