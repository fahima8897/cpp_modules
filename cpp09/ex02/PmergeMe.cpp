#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe()
{
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
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	if ( this == &rhs )
		return *this;
	this->_vec = rhs._vec;
	this->_deq = rhs._deq;
	return *this;
}

// std::ostream &operator<<(std::ostream &o, PmergeMe const &i)
// {
// 	o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void PmergeMe::merge_vec(std::vector<int> &vec, int start, int half, int end)
{
	std::vector<int> right(vec.begin() + start, vec.begin() + half + 1);
	std::vector<int> left(vec.begin() + half + 1, vec.begin() + end + 1);

	size_t i_right = 0;
	size_t i_left = 0;

	
}

void PmergeMe::merge_deq(std::deque<int> &deq, int start, int half, int end)
{
	
}

void PmergeMe::sort_vec(std::vector<int> &vec, int start, int end)
{
	if(end - start >= 2)
	{
		int half = (start + end) / 2;
		sort_vec(vec, start, half);
		sort_vec(vec, half + 1, end);
		merge_vec(vec, start, half, end);
	}
	else
		insert_vec(vec, start, end);
}

void PmergeMe::sort_deq(std::deque<int> &deq, int start, int end)
{
	if(end - start >= 2)
	{
		int half = (start + end) / 2;
		sort_deq(deq, start, half);
		sort_deq(deq, half + 1, end);
		merge_deq(deq, start, half, end);
	}
	else
		insert_deq(deq, start, end);
}

void PmergeMe::merge_sort()
{
	clock_t vec_time, deq_time;

	vec_time = clock();
	sort_vec(this->_vec, 0, this->_vec.size() - 1);
	vec_time = clock() - vec_time;


	deq_time = clock();
	sort_deq(this->_deq, 0, this->_deq.size() - 1);
	deq_time = clock() - deq_time;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int>  &PmergeMe::getVector()
{
	return this->_vec;
}

std::deque<int>  &PmergeMe::getDeque()
{
	return this->_deq;
}
/* ************************************************************************** */