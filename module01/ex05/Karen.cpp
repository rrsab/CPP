#include "Karen.hpp"



void Karen::debug(void) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
}

void Karen::info(void) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. ";
	std::cout << "You don't put enough! ";
	std::cout << "If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void Karen::warning(void) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming here for years and you just started working "
				 "here last month.";
	std::cout << std::endl;
}

void Karen::error(void) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak the manager now.";
	std::cout << std::endl;
}

void Karen::complain(std::string level) {
	void	(Karen::*functionPtr[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string	array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (!array[i].empty() && array[i] != level)
		i++;
	switch (i) {
	case 0:
		(this->*functionPtr[i])();
		break;
	case 1:
		(this->*functionPtr[i])();
		break;
	case 2:
		(this->*functionPtr[i])();
		break;
	case 3:
		(this->*functionPtr[i])();
		break;
	default:
		std::cout << "Wrong level. ";
		std::cout << "Usage: 'DEBUG', 'INFO', 'WARNING' or 'ERROR'";
		std::cout << std::endl;
		break;
	}

}

Karen::Karen() {
}
Karen::~Karen() {
}