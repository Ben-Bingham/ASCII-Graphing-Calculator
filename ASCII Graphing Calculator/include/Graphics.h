#pragma once

#include "Screen.h"

namespace IO {
	namespace GUI {
		class Graphics {
		private:

		public:
			void clearScreen();
			void drawScreen(Screen& screenToDraw);
		};
	}
}