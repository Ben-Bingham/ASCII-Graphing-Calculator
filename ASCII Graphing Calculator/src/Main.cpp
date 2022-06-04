#include <iostream>
#include <string>

#include "Console.h"
#include "Screen.h"
#include "Math/Graphing.h"
#include "Math/Expression.h"

int main() {
	int screenWidth = 53;
	int screenHeight = 15;
	bool calcOpen = true;

	//IO::GUI::Screen screen = IO::GUI::Screen(screenWidth, screenHeight);
	IO::Translators::Console console = IO::Translators::Console();
	
	Math::Graphing graph = Math::Graphing(screenWidth, screenHeight, Math::Expression(20, Math::Subtraction, 1));

	graph.graph();
	
	std::vector<std::vector<int>> data = graph.getData();
	std::string string = "";

	for (std::vector<int> i : data) {
		for (int j : i) {
			if (j) {
				string += "#";
			}
			else {
				string += ".";
			}
		}
		string += "\n";
	}

	std::cout << string << std::endl;
	/*while (calcOpen) {
		screen.draw();
				
		console.process(screen);
	}*/

	std::cin.get();

	return 0;
}