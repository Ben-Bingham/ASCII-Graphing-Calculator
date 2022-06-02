#include <sstream>
#include <iostream>
#include <string>

#include "Reader.h"

using namespace IO;

std::string Reader::read() {
	std::string input;
	std::getline(std::cin, input);
	return input;
}
