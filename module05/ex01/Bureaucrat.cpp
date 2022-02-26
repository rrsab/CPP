#include "Bureaucrat.hpp"

const std::string &Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

void Bureaucrat::incrementGrade() {
    if (--_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
    if (++_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other)
    {
        this->_grade = other._grade;
        const_cast <std::string&>(this->_name) = other._name;
    }
    return *this;
}

void Bureaucrat::signForm(Form &form) {
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed form " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn't sign form " << form.getName()
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