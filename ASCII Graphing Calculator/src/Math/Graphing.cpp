#include <vector>
#include "Math\Graphing.h"

namespace Math {
	Graphing::Graphing(int width, int height, Expression expression)
		: m_Width(width), m_Height(height), m_Expression(expression), m_Data(height, std::vector<int>(width, 0)), m_VariableExpression(X, Additon, NULL) {

	}

	Graphing::Graphing(int width, int height, VariableExpression expression) 
		: m_Width(width), m_Height(height), m_Expression(NULL, Additon, NULL), m_Data(height, std::vector<int>(width, 0)), m_VariableExpression(expression) {

	}

	void Graphing::graph() {
		int result;

		if (m_VariableExpression.getValue() == NULL) {
			for (int i = 0; i < m_Width; i++) {
				result = (int)m_Processor.evaluateExpression(m_Expression);
				if (result < m_Height) {
					m_Data[result][i] = 1;
				}
			}
		}
		else {
			for (int i = 0; i < m_Width; i++) {
				result = (int)m_Processor.evaluateVariableExpression(m_VariableExpression, i);
				if (result < m_Height) {
					m_Data[result][i] = 1;
				}
			}
		}
		
	}

	// Getters
	std::vector<std::vector<int>> Graphing::getData() const { return m_Data; }

	// Setters
	void Graphing::setExpression(Expression expression) { m_Expression = expression; }
}