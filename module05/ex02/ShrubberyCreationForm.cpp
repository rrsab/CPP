#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
        : Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
        : Form(form.getName(), form.getGradeToSign(), form.getGradeToExecute()), target(form.target)
{
    *this = form;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form)
{
    (void)form;
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (isAbleToExecute(executor))
    {
        std::string filename = target + "_shrubbery";
        std::ofstream output(filename.c_str());
        output << "                    _.|._" << std::endl
              << "                      |" << std::endl
              << "                     / \\" << std::endl
              << "                    /   \\" << std::endl
              << "                   /  o.~\\" << std::endl
              << "                  !_.~   _!" << std::endl
              << "                  /      o\\" << std::endl
              << "                 / J  ~    \\" << std::endl
              << "                !_      J  _!" << std::endl
              << "                /   o      ~\\" << std::endl
              << "               /  J   .~~    \\" << std::endl
              << "              !_..~~       o _!" << std::endl
              << "              /  ..       J   \\" << std::endl
              << "             /  o    ~~..      \\" << std::endl
              << "            !_      J      ~~.._!" << std::endl
              << "            /  o       J  ..~~  \\" << std::endl
              << "           /      ..~~~~~~    o  \\" << std::endl
              << "          !:::::::::::::::::::::::!" << std::endl
              << "                  \\______/ " << std::endl;
        output.close();
    }
}
