#define BOOST_TEST_MODULE dataset_example63
#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

namespace bdata = boost::unit_test::data;

BOOST_DATA_TEST_CASE(
    test1,
    bdata::random(1, 17) ^ bdata::xrange(7),
    random_sample, index)
{
    std::cout << "test 1: " << random_sample << ", " << index << std::endl;
    BOOST_TEST((random_sample <= 17 && random_sample >= 1));
}

BOOST_DATA_TEST_CASE(
    test2,
    bdata::random((bdata::distribution=std::uniform_real_distribution<float>(1, 2))) ^ bdata::xrange(7),
    random_sample, index)
{
    std::cout << "test 2: " << random_sample << ", " << index << std::endl;
    BOOST_TEST(random_sample < 1.7);
}