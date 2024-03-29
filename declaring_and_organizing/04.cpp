#define BOOST_TEST_MODULE dataset_example62
#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

namespace data = boost::unit_test::data;

int samples1[] = {1, 2};
int samples2[] = {8, 9, 10};

BOOST_DATA_TEST_CASE(
    test1,
    data::make(samples1) + samples2,
    var)
{
    std::cout << var << std::endl;
}