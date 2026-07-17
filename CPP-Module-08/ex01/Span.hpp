#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <iterator>

class Span
{
	private:
		unsigned int      _maxSize;
		std::vector<int>  _data;

	public:
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void         addNumber(int n);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		template <typename It>
		void addRange(It first, It last);

		class FullException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class NoSpanException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

template <typename It>
void Span::addRange(It first, It last)
{
	typename std::iterator_traits<It>::difference_type count = std::distance(first, last);

	if (count < 0 || _data.size() + static_cast<unsigned int>(count) > _maxSize)
		throw FullException();

	_data.insert(_data.end(), first, last);
}

#endif
