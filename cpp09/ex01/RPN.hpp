#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{

	public:

		RPN();
		RPN(RPN const &src);
		RPN &operator=(RPN const &rhs);
		~RPN();

		std::stack<int> const &getStack() const;

		bool operateur(const char c);
		void calcul(std::string str);
		bool checkvalidity(std::string str);

	private:
		std::stack<int> _pile;

};

std::ostream &operator<<(std::ostream &o, RPN const &i);

#endif /* ************************************************************* RPN_H */