#include "pch.h"
#include "CppUnitTest.h"
#include "../13.1/var.cpp"
#include "../13.1/dod.cpp"
using namespace nsDod;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 1;
			x =0;
			n = 1;
			dod();
			Assert::AreEqual(a, 0.);
		}
	};
}
