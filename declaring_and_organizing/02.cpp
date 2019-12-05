#include <boost/test/included/unit_test.hpp>
#include <boost/bind.hpp>
using namespace boost::unit_test;

class test_class
{
public:

	void test_method1()
	{
		BOOST_TEST(true);
	}

	void test_method2()
	{
		BOOST_TEST(false);
	}
};

test_suite * init_unit_test_suite(int, char * [])
{
	boost::shared_ptr<test_class> tester(new test_class);

	framework::master_test_suite().
		add(BOOST_TEST_CASE(boost::bind(&test_class::test_method1, tester)));
	framework::master_test_suite().
		add(BOOST_TEST_CASE(boost::bind(&test_class::test_method2, tester)));
	return 0;
}