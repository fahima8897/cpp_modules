#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN()
{
	std::cout << "Default constructor RPN called\n";
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
	std::cout << "Destructor RPN called\n";
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


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */