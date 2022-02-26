#include "Bureaucrat.hpp"

int	main(void)
{
    {
        Bureaucrat Vova("Vova", 25);
        std::cout << "name: " << Vova.getName() << std::endl;
        std::cout << "grade: " << Vova.getGrade() << std::endl;
        std::cout << Vova << "\n";
        Vova.decrementGraide();
        std::cout << RED << "decrementGraide() -> " << Vova << std::endl;
        Vova.incrementGraide();
        std::cout << "incrementGraide() -> " << Vova << DEFAULT << std::endl;

    }
    std::cout << "--------1----------" << std::endl;
    {
        try
        {
            Bureaucrat a("Oleg", 0);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "--------2----------" << std::endl;
    {
        try
        {
            Bureaucrat a("Oleg", 151);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "--------3----------" << std::endl;
    {
        try
        {
            Bureaucrat a("Oleg", 1);
            a.incrementGraide();
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "--------4----------" << std::endl;
    {
        try
        {
            Bureaucrat a("Oleg", 150);
            a.decrementGraide();
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}