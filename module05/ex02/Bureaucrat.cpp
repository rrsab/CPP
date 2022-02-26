#include "Bureaucrat.hpp"

const std::string &Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

void Bureaucrat::incrementGrade() {
    if (--grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
    if (++grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other)
    {
        this->grade = other.grade;
        const_cast <std::string&>(this->name) = other.name;
    }
    return *this;
}

void Bureaucrat::signForm(Form &form) {
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed form " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << " couldn't sign form " << form.getName()
                    << " because his grade is too low!" << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat::GradeTooHighException grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat::GradeTooLowException grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other){
    os << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
    return os;
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
    catch (Form::IsNotSigned &e)
    {
        std::cout << name << " couldn't execute " << "form " << form.getName() << " because it's not signed!" << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << name << " couldn't execute " << "form " << form.getName() << " because his grade is too low!" << std::endl;
    }
}
