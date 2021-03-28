//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
/*
class FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test : public ::testing::Test 
{
public: 
	FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test() {}
private: 
	virtual void TestBody(); 
	static ::testing::TestInfo* const test_info_; 
	FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test(FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test const&) = delete; void operator=(FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test const&) = delete;
}; 
::testing::TestInfo* const FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test::test_info_ =
	::testing::internal::MakeAndRegisterTestInfo(
		"algorithm::datastructure::test" "." "FixedCapacityStackOfStrings", "CanotPopStackWhenStackIsEmpty",
		0, 
		0, 
		::testing::internal::CodeLocation("D:\\Dev\\Git\\Algorithms\\Tests\\DataStructTests\\test.cpp", 5),
		(::testing::internal::GetTestTypeId()), ::testing::Test::SetUpTestCase, ::testing::Test::TearDownTestCase, new ::testing::internal::TestFactoryImpl< FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test>
	); 

void FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test::TestBody()
{
	FixedCapacityStackOfStrings stack(10);
	bool caughtException = false;
	try
	{
		stack.pop();
	}
	catch (std::underflow_error e)
	{
		caughtException = true;
	}
		switch (0) case 0: default: if (const ::testing::AssertionResult gtest_ar_ = ::testing::AssertionResult(caughtException)); else ::testing::internal::AssertHelper(::testing::TestPartResult::kNonFatalFailure, "D:\\Dev\\Git\\Algorithms\\Tests\\DataStructTests\\test.cpp", 17, ::testing::internal::GetBoolAssertionFailureMessage(gtest_ar_, "caughtException", "false", "true").c_str()) = ::testing::Message() << " flag = " << caughtException;
}
*/
/*
class algorithm_datastructure_test_FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test : public ::testing::Test
{
public: algorithm_datastructure_test_FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test()
{
}
private:
	virtual void TestBody();
	static ::testing::TestInfo* const test_info_;
	algorithm_datastructure_test_FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test(algorithm_datastructure_test_FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test const&) = delete;
	void operator=(algorithm_datastructure_test_FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test const&) = delete;
};

::testing::TestInfo* const algorithm_datastructure_test_FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test::test_info_ =
	::testing::internal::MakeAndRegisterTestInfo(
		"algorithm.datastructure.test" "." "FixedCapacityStackOfStrings",
		"CanotPopStackWhenStackIsEmpty",
		0,
		0,
		::testing::internal::CodeLocation("D:\\Dev\\Git\\Algorithms\\Tests\\DataStructTests\\test.cpp", 5),
		(::testing::internal::GetTestTypeId()),
		::testing::Test::SetUpTestCase,
		::testing::Test::TearDownTestCase,
		new ::testing::internal::TestFactoryImpl<algorithm_datastructure_test_FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test>
	);

void algorithm_datastructure_test_FixedCapacityStackOfStrings_CanotPopStackWhenStackIsEmpty_Test::TestBody()
{
	FixedCapacityStackOfStrings stack(10);
	bool caughtException = false;
	try
	{
		stack.pop();
	}
	catch (std::underflow_error e)
	{
		caughtException = true;
	}
		switch (0) case 0: default: if (const ::testing::AssertionResult gtest_ar_ = ::testing::AssertionResult(caughtException)); else ::testing::internal::AssertHelper(::testing::TestPartResult::kNonFatalFailure, "D:\\Dev\\Git\\Algorithms\\Tests\\DataStructTests\\test.cpp", 17, ::testing::internal::GetBoolAssertionFailureMessage(gtest_ar_, "caughtException", "false", "true").c_str()) = ::testing::Message() << " flag = " << caughtException;
}
*/