#include <iostream>
#include <string>

#include "Printer.h"
using namespace IO;

void Printer::print(std::string string) {
	std::cout << string;
}

void Printer::println(std::string string) {
	std::cout << string << std::endl;
}
