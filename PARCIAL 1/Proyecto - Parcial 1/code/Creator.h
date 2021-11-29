#pragma once
#include <iomanip>
#include <sstream>
#include <vector>
#include <iostream>
#include "Persona.h"

class Creator {
private:
	static void create_account();
	static LinkedList<Persona>& container();
};