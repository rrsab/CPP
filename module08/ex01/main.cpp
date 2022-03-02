#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		std::cout << "Max size: " << sp.getMaxSize() << std::endl;
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Array: " << sp << std::endl;
		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << DEFAULT <<std::endl;
	}
	std::cout << std::endl;
	{
		try
		{
			Span sp = Span(10);
			std::cout << "Max size: " << sp.getMaxSize() << std::endl;
			sp.addNumber(1342);
			sp.addNumber(5243);
			sp.addNumber(3456);
			sp.addNumber(213);
			sp.addNumber(34);
			std::cout << "Array: " << sp << std::endl;
			std::cout << "shortest: " << sp.shortestSpan() << std::endl;
			std::cout << "longest: " << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << RED << e.what() << DEFAULT <<std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Span sp = Span(3);
			std::cout << "Max size: " << sp.getMaxSize() << std::endl;
			sp.addNumber(1342);
			sp.addNumber(5243);
			sp.addNumber(3456);
			sp.addNumber(213);
			sp.addNumber(34);
			std::cout << "Array: " << sp << std::endl;
			std::cout << "shortest: " << sp.shortestSpan() << std::endl;
			std::cout << "longest: " << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << RED << e.what() << DEFAULT <<std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::vector<int> tmp;
			for (int i = 0; i < 10000; ++i)
				tmp.push_back(i);
			Span sp = Span(10000);
			sp.addNumber(tmp.begin(), tmp.end());
			std::cout << "Max size: " << sp.getMaxSize() << std::endl;
			std::cout << "Array: 0 1 .. 9999 10000" << std::endl;
			std::cout << "shortest: " << sp.shortestSpan() << std::endl;
			std::cout << "longest: " << sp.longestSpan() << std::endl << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << RED << e.what() << DEFAULT <<std::endl;
		}
	}

}