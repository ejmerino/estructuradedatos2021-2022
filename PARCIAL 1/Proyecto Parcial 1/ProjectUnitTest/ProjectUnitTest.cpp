#include "pch.h"
#include "CppUnitTest.h"
#include "../code/Utils.h"
#include "../code/Utils.cpp"
#include "../code/Person.cpp"
#include "../code/Person.h"
#include "../code/Node.h"
#include "../code/LinkedList.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProjectUnitTest
{
	/*****************************VALIDATE ID TEST*******************************/
	TEST_CLASS(Validation1)
	{
	public:

		TEST_METHOD(Validate_Id1)
		{
			std::string id = "1724701402";
			Assert::AreEqual(false, Utils::Validation::validate_id(id));
		}
		TEST_METHOD(Validate_Id2)
		{
			std::string id = "1719132027";
			Assert::AreEqual(false, Utils::Validation::validate_id(id));
		}

		TEST_METHOD(Validate_Id3)
		{
			std::string id = "1721482998";
			Assert::AreEqual(false, Utils::Validation::validate_id(id));
		}
	};

	/*****************VALIDATE STRING TEST*************************/
	TEST_CLASS(Validation2)
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
			std::string id = "Santaiago 5894";
			Assert::AreEqual(true, Utils::Validation::validate_string(id));
		}
	};

	/*****************VALIDATE BIRTH DATE TEST*************************/
	TEST_CLASS(Validation3)
	{
	public:

		TEST_METHOD(validate_date1)
		{
			std::string id = "14/04/2002";
			Assert::AreEqual(true, Utils::Validation::validate_date(id));
		}
		TEST_METHOD(validate_date2)
		{
			std::string id = "14/12/2022";
			Assert::AreEqual(true, Utils::Validation::validate_date(id));
		}
		TEST_METHOD(validate_date3)
		{
			std::string id = "19/02/2004";
			Assert::AreEqual(true, Utils::Validation::validate_date(id));
		}
	};

	/*************************IS DIGIT TEST**********************/
	TEST_CLASS(Validation4)
	{
	public:

		TEST_METHOD(is_Digit1)
		{
			std::string id = "123456798";
			Assert::AreEqual(true, Utils::Validation::is_digit(id));
		}
		TEST_METHOD(is_Digit2)
		{
			std::string id = "Hola";
			Assert::AreEqual(false, Utils::Validation::is_digit(id));
		}
		TEST_METHOD(is_Digit3)
		{
			std::string id = "123Yulli";
			Assert::AreEqual(true, Utils::Validation::is_digit(id));
		}
	};

	/*****************GET ACTUAL DATE TEST*************************/
	TEST_CLASS(Generator1)
	{
	public:

		TEST_METHOD(generate_actual_day1)
		{
			std::string date = "08/12/2021";
			Assert::AreEqual(date, Utils::Generator::return_current_time_and_date());
		}
	};

	/*****************CALULATE AGE TEST*************************/
	TEST_CLASS(Generator2)
	{
	public:

		TEST_METHOD(calculate_age1)
		{
			std::string date = "14/04/2002";
			Assert::AreEqual(19, Utils::Generator::calculate_age(date));
		}
		TEST_METHOD(calculate_age2)
		{
			std::string date = "14/12/2004";
			Assert::AreEqual(16, Utils::Generator::calculate_age(date));
		}
		TEST_METHOD(calculate_age3)
		{
			std::string date = "17/12/2000";
			Assert::AreEqual(20, Utils::Generator::calculate_age(date));
		}
	};



	/*****************lower case TEST*************************/
	TEST_CLASS(Generator3)
	{
	public:


		TEST_METHOD(lower_case1)
		{
			std::string frase = "JOSUE MERINO";
			std::string lower = "josue merino";
			Assert::AreEqual(lower, Utils::Generator::lower_case(frase));
		}

		TEST_METHOD(lower_case2)
		{
			std::string frase = "AdIOs";
			std::string lower = "adios";
			Assert::AreEqual(lower, Utils::Generator::lower_case(frase));
		}

		TEST_METHOD(lower_case3)
		{
			std::string frase = "DANIEL VIZCARRA";
			std::string lower = "daniel vizcarra";
			Assert::AreEqual(lower, Utils::Generator::lower_case(frase));
		}
	};
}
