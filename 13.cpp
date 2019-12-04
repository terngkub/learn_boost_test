#include <boost/test/included/unit_test.hpp>
#include <boost/mpl/list.hpp>
using namespace boost::unit_test;

BOOST_TEST_CASE_TEMPLATE_FUNCTION(my_test, T)
{
    BOOST_TEST(sizeof(T) == 4U);
}

test_suite * init_unit_test_suite(int, char *[])
{
    typedef boost::mpl::list<int, long, unsigned char> test_types;
    
    framework::master_test_suite().
        add(BOOST_TEST_CASE_TEMPLATE(my_test, test_types));

    return 0;
}