#pragma once

namespace Math {
	enum Operator {
		Additon,
		Subtraction,
		Multiplication,
		Division,
		Power
	};

	class Expression {
	private:
		Operator m_Operator;
		double m_FirstValue;
		double m_SecondValue;

	public:
		Expression(double firstValue, Operator op, double secondValue);

		// Getters
		Operator getOperator() const;
		double getFirstValue() const;
		double getSecondValue() const;
	};
}