#pragma once
#include <vector>

#include "Printer.h"
#include "Math/Graphing.h"

namespace IO {
	namespace GUI {
		class Graphics {
		private:
			std::vector<std::vector<int>> m_GraphData;
			std::string m_GraphString;
			Printer m_Printer;
		public:
			Graphics();

			//void clearScreen();
			void draw(Math::Graphing& graph);
		};
	}
}