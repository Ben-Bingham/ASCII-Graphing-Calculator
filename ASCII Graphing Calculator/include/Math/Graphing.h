#pragma once
#include <vector>

#include "Expression.h"
#include "Processor.h"

namespace Math {
	class Graphing {
	private:
		int m_Width;
		int m_Height;

		std::vector<std::vector<int>> m_Data;

		Expression m_Expression;
		VariableExpression m_VariableExpression;
		Processor m_Processor;

	public:
		Graphing(int width, int height);
		Graphing(int width, int height, Expression expression);
		Graphing(int width, int height, VariableExpression expression);

		void graph();

		// Getters
		std::vector<std::vector<int>> getData() const;

		// Setters
		void setExpression(Expression expression);
		void setVariableExpression(VariableExpression expression);
	};
}