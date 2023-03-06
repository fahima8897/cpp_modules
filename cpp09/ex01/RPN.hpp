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
		~RPN();

		RPN &operator=(RPN const &rhs);

	private:
		std::stack<int> _pile;

};

std::ostream &operator<<(std::ostream &o, RPN const &i);

#endif /* ************************************************************* RPN_H */