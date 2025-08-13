# include "RPN.hpp"

RPN::RPN( void ) { }

RPN::RPN( const RPN &other ) { *this = other; }

RPN	&RPN::operator=( const RPN &other ) {
	(void) other;
	return *this;
}

RPN::~RPN( void ) { }

int		RPN::calculate( std::istringstream &expression ) {
	short					left, right;
	std::stack<int>			operand;
	std::string				token;

	while (expression >> token) {
		if (token.length() == 1 && std::isdigit(*token.c_str())) {
			operand.push(*token.c_str() - 48);
			continue ;
		}
		if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (operand.size() < 2)
				throw std::runtime_error("Error");

			right = operand.top(), operand.pop();
			left = operand.top(), operand.pop();

			if (token == "+") operand.push(left + right);
			else if (token == "-") operand.push(left - right);
			else if (token == "*") operand.push(left * right);
			else if (token == "/" && right != 0) operand.push(left / right);
			else throw std::runtime_error("Error: Division by zero.");

			continue ;
		}
		throw std::runtime_error("Error");
	}

	if (operand.size() != 1)
		throw std::runtime_error("Error");

	return operand.top();
}
