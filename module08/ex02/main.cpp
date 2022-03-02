#include "MutantStack.hpp"

int main()
{
	std::cout << "TEST SUBJECT" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	std::cout << "TEST REVERSE ITERATOR" << std::endl;
	{
		MutantStack<int> mstack_r;
		mstack_r.push(11);
		mstack_r.push(22);
		mstack_r.push(33);
		mstack_r.push(44);
		mstack_r.push(55);
		mstack_r.push(66);
		mstack_r.push(88);
		MutantStack<int>::reverse_iterator it_r = mstack_r.rbegin();
		MutantStack<int>::reverse_iterator ite_r = mstack_r.rend();
		while (it_r != ite_r)
		{
			std::cout << *it_r << std::endl;
			++it_r;
		}

	}
	std::cout << std::endl;
	std::cout << "TEST COPY CONSTRUCTOR" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(4);
		mstack.push(5);
		MutantStack<int> copy (mstack);

		MutantStack<int>::iterator it = copy.begin();
		MutantStack<int>::iterator ite = copy.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
	}
	return (0);
}