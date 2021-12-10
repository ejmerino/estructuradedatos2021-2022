#include "pch.h"
#include "CppUnitTest.h"
#include "../code/Utils.h"
#include "../code/Cliente.cpp"
#include "../code/Cliente.h"
#include "../code/Cola.cpp"
#include "../code/Cola.h"
#include "../code/Calculo.h"
#include "../code/Calculo.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestColas
{
	TEST_CLASS(Validation1)
	{
	public:

		TEST_METHOD(validate_string1)
		{
			std::string id = "123456798";
			Assert::AreEqual(true, Utils::Validation::validate_string(id));
		}
		TEST_METHOD(validate_string2)
		{
			std::string id = "Ednan Josue";
			Assert::AreEqual(false, Utils::Validation::validate_string(id));
		}
		TEST_METHOD(validate_string3)
		{
			std::string id = "Jhoel 5894";
			Assert::AreEqual(true, Utils::Validation::validate_string(id));
		}
	};

	/*TEST_CLASS(Validation2)
	{
	public:

		TEST_METHOD(validate_input_number1)
		{
			Utils::Validation::validation_numbers<int>;
			int cliente = 20;
			Cliente::calcular_tiempos(cliente);
			Assert::IsTrue(cliente);
		}
		
	};*/
}
