#pragma once
#include <string>
#include <vector>

#include "Graphics.h"
#include "Math/Graphing.h"

namespace IO {
	namespace GUI {
		class Screen {
		private:
			int m_ScreenWidth;
			int m_ScreenHeight;

			/*std::string m_ScreenString;
			std::vector<std::vector<int>> m_GraphData;*/

			Math::Graphing m_Graph;
			Graphics m_Graphics;
		public:
			Screen(int screenWidth, int screenHeight);
			void draw();

			// Setters
			void setExpression(Math::Expression expression);
			void setVariableExpression(Math::VariableExpression expression);
		};
	}
}