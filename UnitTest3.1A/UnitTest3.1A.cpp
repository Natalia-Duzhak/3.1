#include "pch.h"
#include "CppUnitTest.h"
#include "../Project3.1/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31A
{
	TEST_CLASS(UnitTest31A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle a(0, 0, 0);
			bool k = a.A();
			Assert::AreEqual(k, true);
		}
	};
}
