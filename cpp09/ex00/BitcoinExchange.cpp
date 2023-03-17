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
	this->_map = rhs._map;
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

bool BitcoinExchange::dateChecker(std::string date)
{
	size_t pos;
	std::string rest;
	std::string year;
	std::string month;
	std::string day;

	pos = date.find("-");
	year = date.substr(0, pos);
	rest = date.substr(pos + 1);
	pos = rest.find("-");
	month = rest.substr(0, pos);
	// day = rest.substr(pos + 1, 2);
	// std::cout << year << std::endl;
	// std::cout << month << std::endl;
	// std::cout << day << std::endl;

	if (year.size() > 4)
		return false;
	if (atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		return false;
	if (atoi(month.c_str()) == 2)
		if (atoi(day.c_str()) < 1 || atoi(day.c_str()) > 28)
			return false;
	if (atoi(month.c_str()) == 1 || atoi(month.c_str()) == 0 ||atoi(month.c_str()) == 5 ||atoi(month.c_str()) == 7 || atoi(month.c_str()) == 8 || atoi(month.c_str()) == 10 || atoi(month.c_str()) == 12)
		if (atoi(day.c_str()) < 1 || atoi(day.c_str()) > 31)
			return false;
	if (atoi(month.c_str()) == 4 || atoi(month.c_str()) == 6 ||atoi(month.c_str()) == 9 ||atoi(month.c_str()) == 11)
		if (atoi(day.c_str()) < 1 || atoi(day.c_str()) > 30)
			return false;
	return true;
}

bool BitcoinExchange::valueChecker(std::string value)
{
	size_t pos;
	std::string nb;

	if (!value.find("|"))
		return false;
	pos = value.find("|");
	nb = value.substr(pos + 1);
	if (atoi(nb.c_str()) < 0)
		std::cout << "Error: not a positive number." << std::endl;
	if (atoi(nb.c_str()) < 1000)
		std::cout << "Error: too large a number." << std::endl;
	return true;
}

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
				// for (it = this->_map.begin(); it != this->_map.end(); it++)
					// 	std::cout << it->first << " - " << it->second << std::endl;
			}
		}
		
	}
	else
		std::cout << "Error: could not open csv data file\n";
	data.close();  

}


void BitcoinExchange::inputChecker(std::string line)
{
	if (dateChecker(line) == false)
		std::cout << "Error: bad input => " << line << std::endl;
	if (valueChecker(line) == false)
		std::cout << "Error: bad input => " << line << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::map<std::string, float> const &BitcoinExchange::getMap() const
{
	return this->_map;
}


/* ************************************************************************** */