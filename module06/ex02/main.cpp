#include <iostream>

class Base
		{
		public:
			virtual ~Base() {}
		};

class A : public Base
		{};

class B : public Base
		{};

class C : public Base
		{};

Base *generate(void)
{
	srand(time(NULL));
	int gnr = rand() % 4 + 1;
	Base *base = NULL;
	if (gnr == 1)
		base = new A();
	else if (gnr == 2)
		base = new B();
	else if (gnr == 3)
		base = new C();
	return (base);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << 'C' << std::endl;
}

void identify(Base& p)
{
	if ((char*)&p == NULL)
	{
		std::cout << "Something strange happened" << std::endl;
		return ;
	}
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << 'A' << std::endl;
	}
	catch (std::bad_cast) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
	}
	catch (std::bad_cast) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << 'C' << std::endl;
	}
	catch (std::bad_cast) {}

}

int	main()
{
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	return (0);
}

// Используется для динамического приведения типов во время выполнения.
// В случае неправильного приведения типов для ссылок вызывается исключительная
// ситуация std::bad_cast, а для указателей будет возвращен 0.