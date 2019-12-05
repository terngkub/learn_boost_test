#define BOOST_TEST_MODULE fixture_03
#include <boost/test/included/unit_test.hpp>
namespace utf = boost::unit_test;

struct F
{
    F() { BOOST_TEST_MESSAGE("setup fixture"); }
    ~F() { BOOST_TEST_MESSAGE("teardown fixture"); }
};

BOOST_AUTO_TEST_SUITE(s, * utf::fixture<F>() )

BOOST_AUTO_TEST_CASE(test_case1)
{
    BOOST_TEST_MESSAGE("running test_case1");
    BOOST_TEST(true);
}

BOOST_AUTO_TEST_CASE(test_case2)
{
    BOOST_TEST_MESSAGE("running test_case2");
    BOOST_TEST(true);
}

BOOST_AUTO_TEST_SUITE_END()