#include "pch.h"
#include "../../DataStructure/FixedCapacityStackOfStrings.h"
#include "../../DataStructure/FixedCapacityStack.h"

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

	NAMESPACE_TEST(algorithm.datastructure.test, FixedCapacityStackOfStrings, Can_Pop_Last_Pushed_String_From_Stack)
	{
		bool caughtException = false;
		std::string item;
		FixedCapacityStackOfStrings stack(10);
		try
		{
			stack.push("abc");
			item = stack.pop();
		}
		catch(std::underflow_error e)
		{
			caughtException = true;
		}
		ASSERT_FALSE(caughtException);
		ASSERT_STREQ(item.c_str(), "abc");

	}



	NAMESPACE_TEST(algorithm.datastructure.test, FixedCapacityStack, CanotPopStackWhenStackIsEmpty)
	{
		FixedCapacityStack<std::string> stack(10);
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
	NAMESPACE_TEST(algorithm.datastructure.test, FixedCapacityStack, Can_Push_Stack_When_Stack_Is_Empty)
	{
		bool caughtException = false;
		FixedCapacityStack<std::string> stack(10);
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

	NAMESPACE_TEST(algorithm.datastructure.test, FixedCapacityStack, Can_Pop_Last_Pushed_String_From_Stack)
	{
		bool caughtException = false;
		std::string item;
		FixedCapacityStack<std::string> stack(10);
		try
		{
			stack.push("abc");
			item = stack.pop();
		}
		catch(std::underflow_error e)
		{
			caughtException = true;
		}
		ASSERT_FALSE(caughtException);
		ASSERT_STREQ(item.c_str(), "abc");

	}

	NAMESPACE_TEST(algorithm.datastructure.test, FixedCapacityStack, Can_Push_and_Pop_String_To_and_From_Stack)
	{
		bool caughtException = false;
		std::string item;
		FixedCapacityStack<std::string> stack(10);
		try
		{
			stack.push("to");
			stack.push("be");
			stack.push("or");
			stack.push("not");
			stack.push("to");
			item = stack.pop();
			ASSERT_STREQ(item.c_str(), "to");
			stack.push("be");
			item = stack.pop();
			ASSERT_STREQ(item.c_str(), "be");
			item = stack.pop();
			ASSERT_STREQ(item.c_str(), "not");
			stack.push("that");
			item = stack.pop();
			item = stack.pop();
			item = stack.pop();
			stack.push("is");
			ASSERT_EQ(2,stack.size());
		}
		catch(std::underflow_error e)
		{
			caughtException = true;
		}
		ASSERT_FALSE(caughtException);
	}
}

