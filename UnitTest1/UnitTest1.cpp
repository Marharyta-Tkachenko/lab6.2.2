#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[6] = { 11,-4,10,1,4,7 };
			c = Inverse(a, 6, 1);
			Assert::AreEqual(c, 1);
		}
	};
}
