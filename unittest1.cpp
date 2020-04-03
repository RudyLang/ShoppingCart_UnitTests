#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ShoppingCart/Helpers.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ShoppingCart_Test1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto actual = helpers::IsAlpha("Shoes");
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestModed2)
		{
			auto actual = helpers::isNumeric("1");
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}

	};
}