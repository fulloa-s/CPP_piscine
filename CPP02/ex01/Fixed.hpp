#   ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

class Fixed
{
    int _raw;
    static const int _fract_bit = 8;

    public:

    Fixed();
    Fixed(const int n);
    Fixed(const float f);
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed&    operator = (const Fixed &obj);
    int     getRawBits() const;
    void    setRawBits(int const raw);
    int     toInt() const;
    float   toFloat() const;

};

std::ostream &operator <<(std::ostream &output, const Fixed &obj);



#endif