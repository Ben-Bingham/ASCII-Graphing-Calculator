#include <string>
#include <vector>

#include "Screen.h"
#include "Math/Graphing.h"
#include <Printer.h>

namespace IO {
	namespace GUI {
		Screen::Screen(int screenWidth, int screenHeight) 
			: m_ScreenHeight(screenHeight), m_ScreenWidth(screenWidth), m_Graph(100, 100), m_Graphics() {

		}

		void Screen::draw() {
			m_Graph.graph();

			m_Graphics.draw(m_Graph);
		}

		// Setters
		void Screen::setExpression(Math::Expression expression) {
			m_Graph.setExpression(expression);
		}

		void Screen::setVariableExpression(Math::VariableExpression expression) {
			m_Graph.setVariableExpression(expression);
		}
	}
}