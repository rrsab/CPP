#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
# define DEFAULT	"\033[0m"
# define RED		"\033[31m"

class Bureaucrat {
private:
    Bureaucrat();
    const std::string   _name;
    int                 _grade;
public:
    virtual ~Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat &operator=(Bureaucrat const &other);

    const std::string getName() const;
    int getGrade() const;
    void incrementGraide();
    void decrementGraide();
    class GradeTooHighException: public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &other);

#endif
