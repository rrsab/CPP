#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int         m_value;
    static const int    m_eight;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    Fixed& operator=(const Fixed& other);
};


#endif
