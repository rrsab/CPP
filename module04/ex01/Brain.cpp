#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor called! (Brain)" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor called! (Brain)" << std::endl;
}

Brain::Brain(const Brain &B)
{
    std::cout << "Copy constructor called! (Brain)" << std::endl;
    for (int i = 0; i < 100; ++i)
        _ideas[i] = B._ideas[i];
}

Brain &Brain::operator=(const Brain &B)
{
    std::cout << "Assigned operation called! (Brain)" << std::endl;
    for (int i = 0; i < 100; ++i)
        _ideas[i] = B._ideas[i];
    return (*this);
}
