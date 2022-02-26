#include "Form.hpp"

Form::Form() {}

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute) :
        name(name),
        grade_to_sign(gradeToSign),
        grade_to_execute(gradeToExecute)
{
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw Form::GradeTooHighException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw Form::GradeTooLowException();
    this->is_signed = false;
}



Form::~Form() {}

const std::string &Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return is_signed;
}

int Form::getGradeToSign() const {
    return grade_to_sign;
}

int Form::getGradeToExecute() const {
    return grade_to_execute;
}

Form::Form(const Form &form): name(form.name), grade_to_sign(form.grade_to_sign),
                              grade_to_execute(form.grade_to_execute) {
    *this = form;
}

Form &Form::operator=(const Form &form) {

    if (this != &form) {
        const_cast <std::string&>(name) = form.name;
        is_signed = form.getIsSigned();
        grade_to_sign = form.getGradeToSign();
        grade_to_execute = form.getGradeToExecute();
    }
    return *this;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= grade_to_sign)
        is_signed = true;
    else
        throw Form::GradeTooLowException();
}

bool Form::isAbleToExecute(const Bureaucrat &bureaucrat) const
{
    if (!is_signed)
        throw Form::IsNotSigned();
    if (bureaucrat.getGrade() > this->grade_to_execute)
        throw Form::GradeTooLowException();
    return true;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Form::GradeTooHighException grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Form::GradeTooLowException grade too low";
}

const char* Form::IsNotSigned::what() const throw()
{
    return "Form::IsNotSigned not signed";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << form.getName() << ", "
        << (form.getIsSigned() ? "signed, " : "not signed, ")
        << "grade to sign: " << form.getGradeToSign() << ", "
        << "grade to execute: " << form.getGradeToExecute();
    return os;
}
