#include <boost/test/included/unit_test.hpp>
using namespace boost::unit_test;

void free_test_function()
{
    BOOST_TEST(true);
}

test_suite * init_unit_test_suite(int, char *[])
{
    if (framework::master_test_suite().argc > 1)
        return 0;
    
    framework::master_test_suite().
        add(BOOST_TEST_CASE(&free_test_function));

    return 0;
}