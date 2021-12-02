#pragma once
#include <string>
using namespace std;
class Calendar
{
private:
	string* date;
public:

	/**
	 * @brief Construct a new Calendar object
	 *
	 */
	Calendar(string*);

	/**
	 * @brief Construct a new Calendar object
	 *
	 */
	Calendar() = default;

	/**
	 * @brief Set the date object
	 *
	 */
	void set_date(string*);

	/**
	 * @brief Get the date object
	 *
	 * @return string*
	 */
	string* get_date();


};