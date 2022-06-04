#include <Math/Expression.h>

namespace Math {

	// Expression Class
	Expression::Expression(double firstValue, Operator op, double secondValue) 
		: m_FirstValue(firstValue), m_Operator(op), m_SecondValue(secondValue) {

	}

	Expression::Expression() {}

	// Getters
	Operator Expression::getOperator() const { return m_Operator; }
	double Expression::getFirstValue() const { return m_FirstValue; }
	double Expression::getSecondValue() const { return m_SecondValue; }

	// Variable Expression Class
	VariableExpression::VariableExpression(Variable variable, Operator op, double value) 
		: m_Operator(op), m_SecondValue(value), m_Variable(variable), m_FirstValue(0), m_VarBeforeVal(true) {

	}

	VariableExpression::VariableExpression(double value, Operator op, Variable variable) 
		: m_Operator(op), m_SecondValue(0), m_Variable(variable), m_FirstValue(value), m_VarBeforeVal(false) {

	}

	VariableExpression::VariableExpression() {};

	Operator VariableExpression::getOperator() const { return m_Operator; }
	double VariableExpression::getValue() const { 
		if (m_VarBeforeVal) {
			return m_SecondValue;
		}
		else {
			return m_FirstValue;
		}
	}
	double VariableExpression::getVariable() const { return m_Variable; }
	bool VariableExpression::getVarBeforeVal() const { return m_VarBeforeVal; }
}