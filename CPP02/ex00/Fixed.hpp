#   ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <iomanip>

class Fixed
{
    int _raw;
    static const int _fract_bit = 8;

    public:

    Fixed();
    ~Fixed();
    Fixed(const Fixed &obj);
    Fixed&    operator = (const Fixed &obj);
    int       getRawBits() const;
    void      setRawBits(int const raw); 

};



#endif