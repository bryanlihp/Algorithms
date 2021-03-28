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
		ASSERT_TRUE(caughtException) << " flag = " << caughtException;
	}
	NAMESPACE_TEST(algorithm.datastructure.test, FixedCapacityStackOfStrings, Can_Push_Stack_When_Stack_Is_Empty)
	{
		bool caughtException = false;
		FixedCapacityStackOfStrings stack(10);
		try
		{
			stack.push("1");
		}
		catch(std::underflow_error e)
		{
			caughtException = true;
		}
		ASSERT_TRUE(!stack.isEmpty());
	}

}

