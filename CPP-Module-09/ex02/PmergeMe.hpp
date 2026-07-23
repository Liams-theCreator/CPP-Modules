#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <iostream>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::deque<int>  deq;

		void parse(int argc, char **argv);
		void sortVector();
		void sortDeque();

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		void run(int argc, char **argv);
};

#endif
