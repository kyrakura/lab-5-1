#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.1/lab 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab51test
{
	TEST_CLASS(lab51test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s;
			s = h(1, 2, 3);
			Assert::AreEqual(s, 1.2, 0.00001);
		}
	};
}
