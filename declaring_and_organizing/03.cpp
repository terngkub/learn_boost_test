#define BOOST_TEST_MODULE dataset_example68
#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>
#include <sstream>

namespace bdata = boost::unit_test::data;

/*
need
- arity
- size
- iterator
*/

class fibonacci_dataset
{
public:

	enum { arity = 1 };

	struct iterator
	{
		iterator() : a(1), b(1) {}

		int operator*() const { return b; }

		void operator++()
		{
			a = a + b;
			std::swap(a, b);
		}

	private:
		int a;
		int b;
	};

	fibonacci_dataset() {}
	bdata::size_t size() const { return bdata::BOOST_TEST_DS_INFINITE_SIZE; }
	iterator begin() const { return iterator(); }
};

// register class as monomorphic

namespace boost { namespace unit_test {namespace data { namespace monomorphic {
	template<>
	struct is_dataset<fibonacci_dataset> : boost::mpl::true_ {};
}}}}

// run test case using 

BOOST_DATA_TEST_CASE(
	test1,
	fibonacci_dataset() ^ bdata::make({1, 2, 3, 5, 8, 13, 21, 35, 56}),
	fib_sample, exp)
{
	BOOST_TEST(fib_sample == exp);
}