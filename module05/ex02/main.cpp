#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
    Form *f1 = new PresidentialPardonForm("Home");
    Form *f2 = new RobotomyRequestForm("Home");
    Form *f3 = new ShrubberyCreationForm("Home");
    Bureaucrat oleg("Oleg", 6);
    oleg.executeForm(*f1);
    oleg.signForm(*f1);
    oleg.signForm(*f2);
    oleg.signForm(*f3);
    oleg.executeForm(*f1);
    oleg.executeForm(*f2);
    oleg.executeForm(*f3);
    delete f1;
    delete f2;
    delete f3;
    return 0;
}