#define BOOST_TEST_MODULE decorator_00
#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>

namespace utf = boost::unit_test;
namespace data = boost::unit_test::data;

BOOST_TEST_DECORATOR(* utf::description("with description"))
BOOST_DATA_TEST_CASE(test1, data::xrange(4))
{
    BOOST_TEST(sample >= 0);
}