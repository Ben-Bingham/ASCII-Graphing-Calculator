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
		Processor m_Processor;

	public:
		Graphing(int width, int height, Expression expression);

		void graph();

		// Getters
		std::vector<std::vector<int>> getData() const;

		// Setters
		void setExpression(Expression expression);
	};
}