#include "pch.h"
#include "CppUnitTest.h"
#include "..\..\DataStructure\FixedCapacityStackOfStrings.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace algorithm::datastructure::test
{
	BEGIN_TEST_MODULE_ATTRIBUTE()
	    TEST_MODULE_ATTRIBUTE(L"Date", L"2021/3/27")
	END_TEST_MODULE_ATTRIBUTE()
	
	TEST_MODULE_INITIALIZE(ModuleInitialize)
	{
		Logger::WriteMessage("In Module Initialize");
	}

	TEST_MODULE_CLEANUP(ModuleCleanup)
	{
		Logger::WriteMessage("In Module Cleanup");
	}

	TEST_CLASS(FixedCapacityStackOfStringsTester)
	{
	private:
		FixedCapacityStackOfStrings _stack;
	public:
		FixedCapacityStackOfStringsTester()
			:_stack(10)
		{
			Logger::WriteMessage("Constructing FixedCapacityStackOfStringsTester");
		}

		~FixedCapacityStackOfStringsTester()
		{
			Logger::WriteMessage("Desstructing FixedCapacityStackOfStringsTester");
		}

		TEST_CLASS_INITIALIZE(ClassInitialize)
		{
			Logger::WriteMessage("In Class Initialize");
		}
		
		TEST_CLASS_CLEANUP(ClassCleanup)
		{
			Logger::WriteMessage("In Class Cleanup");
		}
		
		BEGIN_TEST_METHOD_ATTRIBUTE(Canot_Pop_Stack_When_Stack_Is_Empty)
			TEST_OWNER(L"OwnerName")
			TEST_PRIORITY(1)
		END_TEST_METHOD_ATTRIBUTE()		

		TEST_METHOD(Canot_Pop_Stack_When_Stack_Is_Empty)
		{
			Logger::WriteMessage("In Canot_Pop_Stack_When_Stack_Is_Empty");
			bool caughtException = false;
			try
			{
				_stack.pop();
			}
			catch(std::underflow_error e)
			{
				caughtException = true;
			}
			Assert::IsTrue(caughtException,L"Failed");
		}

		TEST_METHOD(Can_Push_Stack_When_Stack_Is_Empty)
		{
			Logger::WriteMessage("In Can_Push_Stack_When_Stack_Is_Empty");
			bool caughtException = false;
			try
			{
				_stack.push("1");
			}
			catch(std::underflow_error e)
			{
				caughtException = true;
			}
			Assert::IsTrue(!_stack.isEmpty());
		}

	};
}
