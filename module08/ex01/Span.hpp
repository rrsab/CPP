#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#define DEFAULT		"\033[0m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"

class Span
{
private:
	unsigned int 		_maxSize;
	std::vector<int>	_array;
	Span();
public:
	~Span();
	Span(const Span &S);
	Span& operator=(const Span &S);
	Span(unsigned int size);
	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();

	void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator finish);

	const std::vector<int>	&getArray() const;
	unsigned int			getMaxSize() const;
	friend std::ostream &operator<<(std::ostream &os, const Span &span);
};


#endif
