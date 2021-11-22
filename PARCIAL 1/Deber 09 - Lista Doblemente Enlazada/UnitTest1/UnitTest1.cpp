#include "pch.h"
#include "CppUnitTest.h"
#include "../code/ListaDoble.h"
#include "../code/ListaDoble.cpp"
#include "../code/Nodo.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ListaDoble<int> list;
			int item = 5;
			list.insertar_cola(item);
			Assert::IsTrue(item);
		}

		TEST_METHOD(TestMethod2)
		{
			ListaDoble<int> list;
			int item = 30;
			list.insertar_cola(item);
			Assert::IsTrue(item);
		}

		TEST_METHOD(TestMethod3)
		{
			ListaDoble<int> list;
			int item = 7;
			list.insertar_cola(item);
			Assert::IsTrue(item);
		}

		TEST_METHOD(TestMethod4)
		{
			ListaDoble<int> list;
			int item = 16;
			list.insertar_cola(item);
			Assert::IsTrue(item);
		}

		TEST_METHOD(TestMethod5)
		{
			ListaDoble<int> list;
			int item = 100;
			list.insertar_cola(item);
			Assert::IsTrue(item);
		}
	};
}
