#include <boost/test/included/unit_test.hpp>
using namespace boost::unit_test;

BOOST_AUTO_TEST_CASE(free_test_function)
{
    BOOST_TEST(true);
}

test_suite * init_unit_test_suite(int, char *[])
{
    framework::master_test_suite().p_name.value = "my master test suite name";
    return 0;
}