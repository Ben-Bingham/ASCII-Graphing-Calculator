#include <iostream>
#include <string>

#include "Reader.h"
#include "Printer.h"
#include "Graphics.h"
#include "Screen.h"

int main() {
	int screenWidth = 100;
	int screenHeight = 20;
	bool calcOpen = true;

	IO::GUI::Screen screen = IO::GUI::Screen(screenWidth, screenHeight);
	IO::GUI::Graphics graphics = IO::GUI::Graphics();
	IO::Printer printer = IO::Printer();
	IO::Reader reader = IO::Reader();

	while (calcOpen) {
		graphics.clearScreen();
		graphics.drawScreen(screen);
		
		reader.read();
		//process input to determine what to do
	}

	return 0;
}