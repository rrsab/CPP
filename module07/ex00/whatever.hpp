#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename RR>
void swap(RR &a, RR &b)
{
	RR tmp = a;
	a = b;
	b = tmp;
}

template <typename RR>
const RR& min(const RR &a, const RR &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename RR>
const RR& max(const RR &a, const RR &b)
{
	if (a > b)
		return a;
	return b;
}

#endif 
