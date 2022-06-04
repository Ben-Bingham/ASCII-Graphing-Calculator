#include <vector>
#include "Math\Graphing.h"

namespace Math {
	Graphing::Graphing(int width, int height, Expression expression)
		: m_Width(width), m_Height(height), m_Expression(expression), m_Data(height, std::vector<int>(width, 0)) {

	}

	void Graphing::graph() {
		int result;

		for (int i = 0; i < m_Width; i++) {
			result = (int)m_Processor.evaluateExpression(m_Expression);
			if (result < m_Height) {
				m_Data[result][i] = 1;
			}
		}
	}

	// Getters
	std::vector<std::vector<int>> Graphing::getData() const { return m_Data; }

	// Setters
	void Graphing::setExpression(Expression expression) { m_Expression = expression; }
}