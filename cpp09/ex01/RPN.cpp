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
	this->_pile = rhs._pile;
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


bool RPN::calcul(std::string str)
{
	int val1;
	int val2;
	int res;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (str.at(i) == ' ')
			continue ;
		else if (!operateur(str.at(i)))
			this->_pile.push(str.at(i) - '0');
		else 
		{
			if (this->_pile.size() >= 2)
			{
				if(!this->_pile.empty())
					val1 = this->_pile.top();
				if(!this->_pile.empty())
					this->_pile.pop();
				if(!this->_pile.empty())
					val2 = this->_pile.top();
				if(!this->_pile.empty())
					this->_pile.pop();
				if(str.at(i) == '+')
					res = val2 + val1;
				else if (str.at(i) == '-')
					res = val2 - val1;
				else if(str.at(i) == '*')
					res = val2 * val1;
				else
				{
					if (val1 == 0)
					{
						std::cout << "Error : operation impossible" << std::endl;
						return false;
					}
					res = val2 / val1;
				}
				this->_pile.push(res);
			}
			else
			{
				std::cout << "Error : operation impossible" << std::endl;
				return false;
        	}
		}
	}
	return true;
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
	if (oper == 0 || oper != numbers - 1)
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