#include "Span.hpp"

Span::Span() : _maxSize(), _array()
{}

Span::~Span()
{}

Span::Span(const Span &S) :  _maxSize(S._maxSize), _array(S._array)
{}

Span &Span::operator=(const Span &S) {
	if (this == &S)
		return (*this);
	_array = S._array;
	_maxSize = S._maxSize;
	return (*this);
}

Span::Span(unsigned int size) : _maxSize(size), _array()
{
}

void Span::addNumber(int n)
{
	if (_maxSize <= _array.size())
		throw std::out_of_range("Span is full");
	_array.push_back(n);
}

int Span::shortestSpan() {
	if (_array.size() < 2)
		throw std::out_of_range("no span to find");
	std::sort(_array.begin(), _array.end());
	int shortest = std::numeric_limits<int>::max();
	std::vector<int>::iterator prev;
	std::vector<int>::iterator cur =_array.begin();
	while (true)
	{
		prev = cur;
		cur++;
		if (cur == _array.end())
			break ;
		if ((*cur - *prev) < shortest)
			shortest = *cur - *prev;
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (_array.size() < 2)
		throw std::out_of_range("no span to find");
	int max = *max_element(_array.begin(), _array.end());
	int min = *min_element(_array.begin(), _array.end());
	return (max - min);
}

const std::vector<int> &Span::getArray() const {
	return _array;
}

unsigned int Span::getMaxSize() const {
	return _maxSize;
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator finish)
{
	int dist = std::distance(start, finish);

	if (dist > static_cast<int>(_maxSize))
		throw std::out_of_range("Span cannot be added, because out of range");
	_array.insert(_array.begin(), start, finish);
}

std::ostream &operator<<(std::ostream &os, const Span &span)
{
	for (unsigned int i = 0; i < span.getArray().size(); ++i)
	{
		os << span.getArray().at(i) << ' ';
	}
	return os;
}