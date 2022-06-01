#include <iostream>
#include <string>

#define SCREEN "."
#define LINE "*"

int screenWidth = 100;
int screenHeight = 20;

int main() {

	std::string screen;

	for (int i = 0; i < screenHeight; i++) {
		for (int j = 0; j < screenWidth; j++) {
			screen += SCREEN;
		}
		screen += "\n";
	}

	std::cout << screen << std::endl;

	std::cin.get();
	return 0;
}