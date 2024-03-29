#define BOOST_TEST_MODULE dataset_example66
#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

namespace bdata = boost::unit_test::data;

const char * arr[] = {"cat", "dog"};

BOOST_DATA_TEST_CASE(
    test1,
    bdata::xrange(2) ^ bdata::make(arr),
    xr, array_element)
{
    std::cout << "test 1: " << xr << ", " << array_element << std::endl;
    BOOST_TEST(array_element != "mammoth");
}