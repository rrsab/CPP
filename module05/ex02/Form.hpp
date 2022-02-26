#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
private:
    const std::string name;
    bool is_signed;
    int grade_to_sign;
    int grade_to_execute;
    Form();
public:
    Form(const std::string &name, const int gradeToSign, const int gradeToExecute);
    Form(const Form &form);
    virtual ~Form();
    Form &operator=(const Form &form);
    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };
    class IsNotSigned: public std::exception {
        virtual const char* what() const throw();
    };
    void beSigned(Bureaucrat &bureaucrat);
    bool isAbleToExecute(const Bureaucrat &bureaucrat) const;
    virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
