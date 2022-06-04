#pragma once

#include <vector>

namespace Math {
	enum Operator {
		Additon,
		Subtraction,
		Multiplication,
		Division,
		Power
	};

	enum Variable {
		X,
		Y
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

	class VariableExpression {
	private:
		Operator m_Operator;
		double m_FirstValue;
		double m_SecondValue;
		Variable m_Variable;
		bool m_VarBeforeVal;

	public:
		VariableExpression(double value, Operator op, Variable variable);
		VariableExpression(Variable variable, Operator op, double value);

		// Getters
		Operator getOperator() const;
		double getValue() const;
		double getVariable() const;
		bool getVarBeforeVal() const;
	};

	/*class AdvancedExpression {
	private:
		std::vector<double> values;
		std::vector<Operator> operators;

	public:
		AdvancedExpression(std::vector<double> values, std::vector<Operator> operators);
	};*/
}