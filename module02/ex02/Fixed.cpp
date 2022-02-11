
#include "Fixed.hpp"

const int	Fixed::m_eight = 8;

Fixed::Fixed() : m_value(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &fixed) {
    m_value = fixed.getRawBits();
}

Fixed::Fixed(const int fixed)
{
    m_value = (fixed << m_eight);
}

Fixed::Fixed(const float fixed)
{
    m_value = roundf(fixed * (1 << m_eight));
}

int		Fixed::getRawBits(void) const {
    return (m_value);
}

void	Fixed::setRawBits(int const raw) {
    m_value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)m_value / (float)(1 << m_eight));
}

int Fixed::toInt(void) const
{
    return (m_value >> m_eight);
}

Fixed	Fixed::operator=(const Fixed &fixed) {
    m_value = fixed.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator==(const Fixed &other) const
{
    return (toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (toFloat() != other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const
{
    return (toFloat() < other.toFloat());
}

bool Fixed::operator>(const Fixed &other) const
{
    return (toFloat() > other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (toFloat() <= other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (toFloat() >= other.toFloat());
}

Fixed Fixed::operator+(const Fixed &fixed)
{
    Fixed value(*this);

    value.setRawBits(m_value + fixed.getRawBits());
    return (value);
}

Fixed Fixed::operator+(void)
{
    return (*this);
}

Fixed Fixed::operator-(const Fixed &fixed)
{
    Fixed value(*this);

    value.setRawBits(m_value - fixed.getRawBits());
    return (value);
}

Fixed Fixed::operator-(void)
{
    return (*this * (-1));
}

Fixed  Fixed::operator*(const Fixed &fixed)
{
    Fixed value(*this);

    value.setRawBits(m_value * fixed.getRawBits() / (1 << m_eight));
    return (value);
}

Fixed Fixed::operator/(const Fixed &fixed)
{
    Fixed value(*this);

    value.setRawBits(toFloat() / fixed.toFloat() * (1 << m_eight));
    return (value);
}

Fixed Fixed::operator++()
{
    m_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed	tmp(*this);
    operator++();
    return (tmp);
}

Fixed Fixed::operator--()
{
    m_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed	tmp(*this);
    operator--();
    return (tmp);
}

Fixed &Fixed::min(Fixed &A, Fixed &B)
{
    return (A < B ? A : B);
}

Fixed &Fixed::max(Fixed &A, Fixed &B)
{
    return (A > B ? A : B);
}

const Fixed &Fixed::min(const Fixed &A, const Fixed &B)
{
    return (A < B ? A : B);
}

const Fixed &Fixed::max(const Fixed &A, const Fixed &B)
{
    return (A > B ? A : B);
}