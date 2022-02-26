#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
public:
    Intern();
    Intern(const Intern &form);
    ~Intern();
    Intern &operator=(const Intern &intern);
    Form *makeForm(std::string form, std::string target);
};


#endif
