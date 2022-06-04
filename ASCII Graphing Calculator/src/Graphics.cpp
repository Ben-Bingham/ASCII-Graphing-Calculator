#include "Graphics.h"

namespace IO {
	namespace GUI {
		Graphics::Graphics() {}

		void Graphics::draw(Math::Graphing& graph) {
			m_GraphData = graph.getData();
			m_GraphString = "";

			for (std::vector<int> i : m_GraphData) {
				for (int j : i) {
					if (j) {
						m_GraphString += "#";
					}
					else {
						m_GraphString += ".";
					}
				}
				m_GraphString += "\n";
			}

			m_Printer.println(m_GraphString);
		}
	}
}