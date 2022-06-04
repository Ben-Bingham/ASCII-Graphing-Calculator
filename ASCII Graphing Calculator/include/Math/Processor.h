#pragma once

#include "Expression.h"

namespace Math {
	class Processor {
	public:
		double evaluateExpression(Expression expression);
		double evaluateVariableExpression(VariableExpression expression, double variableValue);
	};
}