#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan:  " << sp.longestSpan() << std::endl;
	}

	{
		Span sp(2);
		sp.addNumber(1);
		sp.addNumber(2);
		try
		{
			sp.addNumber(3);
			std::cout << "ERROR: overflow not detected" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "overflow: " << e.what() << std::endl;
		}
	}

	{
		Span sp(5);
		sp.addNumber(42);
		try
		{
			sp.shortestSpan();
			std::cout << "ERROR: no-span not detected" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "no span: " << e.what() << std::endl;
		}
	}

	{
		Span sp(5);
		std::vector<int> nums;
		nums.push_back(5);
		nums.push_back(3);
		nums.push_back(12);
		nums.push_back(8);
		sp.addRange(nums.begin(), nums.end());
		std::cout << "range shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "range longest:  " << sp.longestSpan() << std::endl;
	}

	{
		Span sp(3);
		std::vector<int> nums;
		for (int i = 0; i < 10; ++i)
			nums.push_back(i);
		try
		{
			sp.addRange(nums.begin(), nums.end());
			std::cout << "ERROR: range overflow not detected" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "range overflow: " << e.what() << std::endl;
		}
	}

	{
		const unsigned int N = 10000;
		Span sp(N);
		std::vector<int> big;
		big.reserve(N);
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		for (unsigned int i = 0; i < N; ++i)
			big.push_back(std::rand());
		sp.addRange(big.begin(), big.end());
		std::cout << "10k shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "10k longest:  " << sp.longestSpan() << std::endl;
	}

	return 0;
}
