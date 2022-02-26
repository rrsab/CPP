#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
    {
        std::cout << "-------Exceptions-----------" << std::endl;
        try {
            Form L1("L1", 15, 151);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            Form L2("L2", 0, 150);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << "-------signForm()-----------" << std::endl;
        Bureaucrat Oleg("Oleg", 55);
        Bureaucrat Anton("Anton", 5);
        Form B1("B1", 50, 10);
        std::cout << B1 << std::endl;
        Oleg.signForm(B1);
        Anton.signForm(B1);
        std::cout << B1 << std::endl;
    }
    {
        try
        {
            std::cout << "-------beSigned()-----------" << std::endl;
            Bureaucrat Oleg("Oleg", 56);
            Form L3("L3", 55, 10);
            L3.beSigned(Oleg);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}