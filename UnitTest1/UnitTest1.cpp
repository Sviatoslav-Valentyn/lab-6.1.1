#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.1/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int A[] = { 0, 4, -1, -2 };
			int S = Sum(A, 4);
			Assert::AreEqual(1, S);
		}
	};
}