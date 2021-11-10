#include "pch.h"
#include "CppUnitTest.h"
#include "../Code/Operations.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace MiLibreriaTest
{
	TEST_CLASS(MiLibreriaTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double resultado = Operations.fraccion_result(4 / 5, 6 / 7);
			
			Assert.AreEqual(58/35, resultado);
			

		}

		TEST_METHOD(TestMethod2)
		{
			double resultado = Operations.fraccion_result(7 / 5, 15 / 7);

			Assert.AreEqual(124 / 35, resultado);


		}
		}
	}
}
