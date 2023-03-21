#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN()
{
}

RPN::RPN(const RPN &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN &RPN::operator=(RPN const &rhs)
{
	if (this == &rhs)
		return *this;
	return *this;
}

// std::ostream &operator<<(std::ostream &o, RPN const &i)
// {
// 	o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

bool RPN::operateur(const char c)
{
	std::string operateurs = "+-/*";
	bool res = false;
	if (operateurs.find(c) != std::string::npos)
		res = true;
	return res;
}


void RPN::calcul(std::string str)
{
	int val1;
	int val2;
	int res;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (str.at(i) == 32)
			i++;
		if (!operateur(str.at(i)))
		{
			this->_pile.push(str.at(i) - '0');
			std::cout << "nb push : " << this->_pile.top() << std::endl;
		}
		else 
		{
			val1 = this->_pile.top();
			this->_pile.pop();
			val2 = this->_pile.top();
			this->_pile.pop();
			if(str.at(i) == '+')
					res = val2 + val1;
			else if (str.at(i) == '-')
					res = val2 - val1;
			else if(str.at(i) == '*')
					res = val2 * val1;
			else
					res = val2 / val1;
			this->_pile.push(res);
		}
	}
}

bool	RPN::checkvalidity(std::string str)
{
	int oper = 0;
	int numbers = 0;
	size_t i = 0;

	while(i < str.size())
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			oper++;
		else if (str[i] != ' ')
			numbers++;
		++i;
	}
	if (oper == 0 || oper >= numbers)
		return false ;
	return true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::stack<int> const &RPN::getStack() const
{
	return this->_pile;
}

/* ************************************************************************** */