#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{
	// std::cout << "Default constructor BitcoinExchange called\n";
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
	// std::cout << "Destructor BitcoinExchange called\n";
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

// std::ostream &operator<<(std::ostream &o, BitcoinExchange const &i)
// {
// 	o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void BitcoinExchange::fillMap()
{
	std::string line;
	std::string date;
	std::string	value;
	std::ifstream data("data.csv");
	std::size_t found;

	if (data.is_open())
	{
		while (getline(data, line))
		{
			if (line.empty())
				continue ;
			else
			{
				found = line.find(",");
				date = line.substr(0, found);
				value = line.substr(found + 1);
				this->_map.insert(std::pair<std::string, float>(date, atof(value.c_str())));
				std::map<std::string, float>::iterator it;
				for (it = this->_map.begin(); it != this->_map.end(); it++)
				{
					std::cout << it->first << " - " << it->second << std::endl;
				}
			}
		}
		
	}
	else
		std::cout << "Error: could not open csv data file\n";
	data.close();  

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::map<std::string, float> const &BitcoinExchange::getMap() const
{
	return this->_map;
}


/* ************************************************************************** */