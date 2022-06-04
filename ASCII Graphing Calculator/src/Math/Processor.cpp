#include <cmath>

#include "Math/Processor.h"
#include "Math/Expression.h"

namespace Math {
	double Processor::evaluateExpression(Expression expression) {
		double firstVal = expression.getFirstValue();
		double secondVal = expression.getSecondValue();
		switch (expression.getOperator()) {
		case Additon:
			return firstVal + secondVal;
		case Subtraction:
			return firstVal - secondVal;
		case Multiplication:
			return firstVal * secondVal;
		case Division:
			return firstVal / secondVal;
		case Power:
			return std::pow(firstVal, secondVal);
		default :
			return 0;
		}
	}

	double Processor::evaluateVariableExpression(VariableExpression expression, double variableValue) {
		double val = expression.getValue();
		if (expression.getVarBeforeVal()) {
			switch (expression.getOperator()) {
			case Additon:
				return variableValue + val;
			case Subtraction:
				return variableValue - val;
			case Multiplication:
				return variableValue * val;
			case Division:
				return variableValue / val;
			case Power:
				return std::pow(variableValue, val);
			default:
				return 0;
			}
		}
		else {
			switch (expression.getOperator()) {
			case Additon:
				return val + variableValue;
			case Subtraction:
				return val - variableValue;
			case Multiplication:
				return val * variableValue;
			case Division:
				return val / variableValue;
			case Power:
				return std::pow(val, variableValue);
			default:
				return 0;
			}
		}
	}
}