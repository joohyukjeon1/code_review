#include "priority_queue.h"

#include <gtest/gtest.h>

// TEST(testCaseName, testName){
//   ... test body ...
// }


TEST(PriorityQueueTest,Trivial){
	PriorityQueue<int> expTarget;

	//Test 1 - Initalize
	ASSERT_TRUE(expTarget.Empty()); // empty test
	

	//Test1 1-1 - Error handling test
	expTarget.Pop();  // Nothing happens
	ASSERT_EQ(expTarget.Top(), -1);  // TODO: Need replacing -1 with another value or put a different error handling logic

	//Test 2 - Push Datas and Top size
	expTarget.Push(1);
	expTarget.Push(4);
	expTarget.Push(2);
	expTarget.Push(3);
	expTarget.Push(8);
	expTarget.Push(5);
	
	ASSERT_EQ(expTarget.size(), 6);  // Pushed 6 elements
	ASSERT_EQ(expTarget.Top(), 8);  // The highest pushed value is 8
	ASSERT_FALSE(expTarget.Empty());  // it must not be empty

	//Test 3 - pop test

	expTarget.Pop();
	expTarget.Pop();
	expTarget.Pop();
	
	ASSERT_EQ(expTarget.Top(), 3);
	ASSERT_EQ(expTarget.Size(), 3);
	ASSERT_FALSE(expTarget.Empty());

	expTarget.Pop();
	expTarget.Pop();
	expTarget.Pop();
	
	ASSERT_TRUE(expTarget.Empty());
	
	/* Fail Example - If you activate this code, Test will be fail *

	expTarget.pop();
	
	EXPECT_TRUE(expTarget.empty()); // non-Fatal Failure - not terminate this test case when result of empty method is false.
	ASSERT_EQ(expTarget.size(),0);
        /**/
	

	PriorityQueue<float> expTarget2;

	//Test 1 - Initalize
	ASSERT_TRUE(expTarget.Empty()); // empty test


	//Test1 1-1 - Error handling test
	expTarget.Pop();  // Nothing happens
	ASSERT_EQ(expTarget.Top(), -1);  // TODO: Need replacing -1 with another value or put a different error handling logic

	//Test 2 - Push Datas and Top size
	expTarget.Push(1.f);
	expTarget.Push(4.f);
	expTarget.Push(2.f);
	expTarget.Push(3.f);
	expTarget.Push(8.f);
	expTarget.Push(5.f);

	ASSERT_EQ(expTarget.size(), 6);  // Pushed 6 elements
	ASSERT_EQ(expTarget.Top(), 8);  // The highest pushed value is 8
	ASSERT_FALSE(expTarget.Empty());  // it must not be empty

	//Test 3 - pop test

	expTarget.Pop();
	expTarget.Pop();
	expTarget.Pop();

	ASSERT_EQ(expTarget.Top(), 3.f);
	ASSERT_EQ(expTarget.Size(), 3);
	ASSERT_FALSE(expTarget.Empty());

	expTarget.Pop();
	expTarget.Pop();
	expTarget.Pop();

	ASSERT_TRUE(expTarget.Empty());

	/* Fail Example - If you activate this code, Test will be fail *

	expTarget.pop();

	EXPECT_TRUE(expTarget.empty()); // non-Fatal Failure - not terminate this test case when result of empty method is false.
	ASSERT_EQ(expTarget.size(),0);
		/**/


}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
