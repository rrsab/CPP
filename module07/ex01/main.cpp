#include "iter.hpp"

class Awesome
{
public:
	Awesome(void) : _n(42) { return; }
	int get(void)const { return this->_n; }
private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs) { o << rhs.get(); return o; }

template <typename T>
void increment(T &t)
{
	++t;
}


template <typename T>
void	printing(T *t, int len)
{
	for (int i = 0; i < len; ++i)
		std::cout << t[i] << ' ';
	std::cout << std::endl;
}

template <typename T>
void print(T &elem)
{
	std::cout << elem << " ";
}

int main()
{
	{
		char a[] = {'a', 'b', 'c'};
		int b[] = {10, 20, 30};
		float c[] = {10.10, 20.20, 30.30};

		printing(a, 3);
		printing(b, 3);
		printing(c, 3);
		iter(a, 3, increment);
		iter(b, 3, increment);
		iter(c, 3, increment);
		std::cout << std::endl;
		printing(a, 3);
		printing(b, 3);
		printing(c, 3);
	}
	{
		std::cout << std::endl;
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];
		iter(tab, 5, print);
		iter(tab2, 5, print);
		std::cout << std::endl;
	}

	return 0;
}
