#define BOOST_TEST_MODULE boost_test_strings
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test_pointers)
{
    float a(0.5f), b(0.5f);
    const float * pa = &a, * pb = &b;
    BOOST_TEST(a == b);
    BOOST_TEST(pa == pb);
}

BOOST_AUTO_TEST_CASE(test_strings)
{
    const char * a = "test1";
    const char * b = "test2";
    const char * c = "test1";
    BOOST_TEST(a == b);
    BOOST_TEST(a == c);
    BOOST_TEST(std::string("test1") == b);
    BOOST_TEST(std::string("test1") < a, boost::test_tools::per_element());
    BOOST_TEST(b < a, boost::test_tools::lexicographic());
}