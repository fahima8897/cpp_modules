#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <math.h>

class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange &operator=(BitcoinExchange const &rhs);

		std::map<std::string, float> const &getMap() const;

		void fillMap();



	private:

	 	std::map<std::string, float> _map;

};

std::ostream &operator<<(std::ostream &o, BitcoinExchange const &i);

#endif /* ************************************************* BITCOINEXCHANGE_H */