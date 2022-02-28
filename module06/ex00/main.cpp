#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "I work only one agrument!" << std::endl;
		return (1);
	}
	std::cout.precision(1);
	std::cout << std::fixed;

	if (strcmp(av[1], "-inf") == 0 || strcmp(av[1], "+inf") == 0 || strcmp(av[1], "nan") == 0 ||
	strcmp(av[1], "-inff") == 0 || strcmp(av[1], "+inff") == 0 || strcmp(av[1], "nanf") == 0)
	{
		try
		{
			char	c = static_cast<char>(std::stoi(av[1]));
			if (std::isprint(c))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		catch (std::exception &exception)
		{
			std::cout << "char: impossible" << std::endl;
		}
		int i = 5;
		if (strlen(av[1]) == 5)
			i = 4;
		if (av[1][0] == 'n')
			i = 3;
		std::string new_str = ((std::string)av[1]).substr(0, i);

		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << new_str << "f" << std::endl;
		std::cout << "double: " << new_str << std::endl;
		return (0);
	}

	try
	{
		int i = static_cast<char>(std::atoi(av[1]));
		if (!std::isprint(i) || (!(i >= 32 && i <= 126)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	}

	catch (std::exception &exception)
	{
		std::cout << "char: impossible" << std::endl;
	}

	try
	{
		int i = std::stoi(av[1]);
		std::cout << "int: " << i << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << "int: impossible" << std::endl;
	}

	try
	{
		float f = std::stof(av[1]);
		std::cout << "float: " << f << "f" << std::endl;
	}
	catch (std::out_of_range &outOfRange)
	{
		std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << "float: impossible" <<std:: endl;
	}

	try
	{
		double d = std::stod(av[1]);
		std::cout << "double: " << d << std::endl;
	}
	catch (std::out_of_range &outOfRange)
	{
		std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << "double: impossible" <<std:: endl;
	}
}
