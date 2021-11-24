#include "pch.h"
#include "CppUnitTest.h"
#include "../code/Lista.h"
#include "../code/Lista.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Lista<int> list;
			int item = 5;
			list.insertar(item);
			Assert::IsTrue(item);
		}

		TEST_METHOD(TestMethod2)
		{
			Lista<int> list;
			int item = 70;
			list.insertar(item);
			Assert::IsTrue(item);
		}

		TEST_METHOD(TestMethod3)
		{
			Lista<int> list;
			int item = 80;
			list.insertar(item);
			Assert::IsTrue(item);
		}

		TEST_METHOD(TestMethod4)
		{
			Lista<int> list;
			int item = 15;
			list.insertar(item);
			Assert::IsTrue(item);
		}

		TEST_METHOD(TestMethod5)
		{
			Lista<int> list;
			int item = 21;
			list.insertar(item);
			Assert::IsTrue(item);
		}
	};
}
