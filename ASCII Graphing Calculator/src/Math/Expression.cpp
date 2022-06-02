#include <Math/Expression.h>

namespace Math {
	Expression::Expression(double firstValue, Operator op, double secondValue) 
		: m_FirstValue(firstValue), m_Operator(op), m_SecondValue(secondValue) {

	}

	// Getters
	Operator Expression::getOperator() const { return m_Operator; }
	double Expression::getFirstValue() const { return m_FirstValue; }
	double Expression::getSecondValue() const { return m_SecondValue; }
}