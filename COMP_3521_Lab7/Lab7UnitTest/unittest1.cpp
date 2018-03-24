#include "CppUnitTest.h"
#include "../COMP_3521_Lab7/Lab7.hpp"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab7UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(UnitTest_SUM)
		{
			Lab7 lab7;
			std::vector<int> vector{ 0, 1 ,2 ,3 ,4 ,5 };

			Assert::AreEqual(15, lab7.sum(vector));
		}

		TEST_METHOD(UnitTest_MAX)
		{
			Lab7 lab7;
			std::vector<int> vector{ 0, 1 ,2 ,3 ,4 ,5 };

			Assert::AreEqual(5, lab7.max(vector));
		}

		TEST_METHOD(UnitTest_MIN)
		{
			Lab7 lab7;
			std::vector<int> vector{ 0, 1 ,2 ,3 ,4 ,5 };

			Assert::AreEqual(0, lab7.min(vector));
		}

		TEST_METHOD(UnitTest_AVERAGE)
		{
			Lab7 lab7;
			std::vector<int> vector{ 0, 1 ,2 ,3 ,4 ,5 };

			Assert::AreEqual(2, lab7.average(vector));
		}

	};
}