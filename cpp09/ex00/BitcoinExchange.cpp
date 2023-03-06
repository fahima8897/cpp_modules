#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{
	std::cout << "Default constructor BitcoinExchange called\n";
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "Destructor BitcoinExchange called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if ( this == &rhs )
		return *this;
	return *this;
}

std::ostream &operator<<(std::ostream &o, BitcoinExchange const &i)
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