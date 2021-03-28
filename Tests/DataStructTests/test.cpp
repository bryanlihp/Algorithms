#include "pch.h"
#include "../../DataStructure/FixedCapacityStackOfStrings.h"
namespace algorithm::datastructure::test
{
	NAMESPACE_TEST(algorithm.datastructure.test, FixedCapacityStackOfStrings, CanotPopStackWhenStackIsEmpty)
	{
		FixedCapacityStackOfStrings stack(10);
		bool caughtException = false;
		try
		{
			stack.pop();
		}
		catch(std::underflow_error e)
		{
			caughtException = true;
		}
		EXPECT_TRUE(caughtException) << " flag = " << caughtException;
	}
}

