#define BOOST_TEST_MODULE decorator_07
#include <boost/test/included/unit_test.hpp>

namespace utf = boost::unit_test;

BOOST_AUTO_TEST_CASE(test3, * utf::depends_on("s1/test1"))
{
    BOOST_TEST(false);
}


BOOST_AUTO_TEST_CASE(test4, * utf::depends_on("test3"))
{
    BOOST_TEST(false);
}

BOOST_AUTO_TEST_CASE(test5, * utf::depends_on("s1/test2"))
{
    BOOST_TEST(false);
}

BOOST_AUTO_TEST_SUITE(s1)

BOOST_AUTO_TEST_CASE(test1)
{
    BOOST_TEST(true);
}

BOOST_AUTO_TEST_CASE(test2, * utf::disabled())
{
    BOOST_TEST(false);
}

BOOST_AUTO_TEST_SUITE_END()