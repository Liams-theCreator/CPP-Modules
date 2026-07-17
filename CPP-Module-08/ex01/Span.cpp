#include "Span.hpp"
#include <algorithm>
#include <numeric>
#include <limits>

Span::Span(unsigned int n) : _maxSize(n), _data()
{
	_data.reserve(n);
}

Span::Span(const Span &other) : _maxSize(other._maxSize), _data(other._data) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_data = other._data;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
	if (_data.size() >= _maxSize)
		throw FullException();
	_data.push_back(n);
}

unsigned int Span::shortestSpan() const
{
	if (_data.size() < 2)
		throw NoSpanException();

	std::vector<int> sorted(_data);
	std::sort(sorted.begin(), sorted.end());

	std::vector<int> diffs(sorted.size());
	std::adjacent_difference(sorted.begin(), sorted.end(), diffs.begin());

	int shortest = *std::min_element(diffs.begin() + 1, diffs.end());
	return static_cast<unsigned int>(shortest);
}

unsigned int Span::longestSpan() const
{
	if (_data.size() < 2)
		throw NoSpanException();

	std::vector<int>::const_iterator lo = std::min_element(_data.begin(), _data.end());
	std::vector<int>::const_iterator hi = std::max_element(_data.begin(), _data.end());
	return static_cast<unsigned int>(*hi - *lo);
}

const char *Span::FullException::what() const throw()
{
	return "Span: capacity reached, cannot add more numbers";
}

const char *Span::NoSpanException::what() const throw()
{
	return "Span: need at least two numbers to compute a span";
}
