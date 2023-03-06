#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe()
{
	std::cout << "Default constructor PmergeMe called\n";
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe()
{
	std::cout << "Destructor PmergeMe called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	if ( this == &rhs )
		return *this;
	return *this;
}

std::ostream &operator<<(std::ostream &o, PmergeMe const &i)
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */