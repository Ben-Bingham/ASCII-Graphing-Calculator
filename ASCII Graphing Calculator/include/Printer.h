#pragma once

#include <string>

namespace IO {
	class Printer {
	public:
		void print(std::string string);
		void println(std::string string);
	};
}