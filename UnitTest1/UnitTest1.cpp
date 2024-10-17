#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5_3/Lab5_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 3;
			double ex = ((cos(x) + exp(-abs(x))) / (pow(cos(x), 2) + 1));
			double t = j(x);
			Assert::AreEqual(ex, t);
		}
	};
}
