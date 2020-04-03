#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ShoppingCart/Helpers.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ShoppingCart_Test1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_isAlpha_1)
		{
			auto actual = helpers::IsAlpha("Shoes");
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Test_isAlpha_2)
		{
			auto actual = helpers::IsAlpha("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Test_isAlpha_3)
		{
			auto actual = helpers::IsAlpha("abcdefghijklmnopqrstuvwxyz");
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Test_isAlpha_4)
		{
			auto actual = helpers::IsAlpha("1");
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Test_isAlpha_5)
		{
			auto actual = helpers::IsAlpha("!");
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Test_isNumeric_1)
		{
			auto actual = helpers::isNumeric("1");
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Test_isNumeric_2)
		{
			auto actual = helpers::isNumeric("a");
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Test_isNumeric_3)
		{
			auto actual = helpers::isNumeric("!");
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}

	};
}