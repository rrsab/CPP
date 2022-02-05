#include "Fixed.hpp"

const int   Fixed::m_eight = 8;

Fixed::Fixed() : m_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    m_value = fixed.getRawBits();
}

Fixed::Fixed(const int fixed) {
    std::cout << "Int constructor called" << std::endl;
    m_value = (fixed << m_eight);
}

Fixed::Fixed(const float fixed)
{
    std::cout << "Float constructor called" << std::endl;
    m_value = roundf(fixed * (1 << m_eight));
}

int Fixed::getRawBits() const {
    return (m_value);
}

float Fixed::toFloat(void) const
{
    return ((float)m_value / (float)(1 << m_eight));
}

int Fixed::toInt(void) const
{
    return (m_value >> m_eight);
}

void    Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    m_value = raw;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    m_value = fixed.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}