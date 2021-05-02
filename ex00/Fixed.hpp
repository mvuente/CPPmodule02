
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_fpv;
	static const int	_fb = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &cpFixed);
	Fixed				&operator=(const Fixed &cpFixed);
	int					getRawBits(void) const;
	void				setRawBits( int const raw );
};

#endif
