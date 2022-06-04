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

}