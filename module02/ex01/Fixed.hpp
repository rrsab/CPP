#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int                 m_value;
    static const int    m_eight;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int fixed);
    Fixed(const float fixed);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    Fixed& operator=(const Fixed &fixed);

};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
