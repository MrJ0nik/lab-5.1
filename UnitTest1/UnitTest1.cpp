#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.1/Lab 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = cfunc(3, 2);
			double expected = 27360.990604633378;

			Assert::AreEqual(expected, result);
		}
	};
}
