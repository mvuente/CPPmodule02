
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_fpv;
	static const int	_fb = 8;
public:
	Fixed(void);
	Fixed(int val);
	Fixed(float val);
	~Fixed(void);
	Fixed(const Fixed &cpFixed);
	Fixed				&operator=(const Fixed &cpFixed);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float 				toFloat(void) const;
	int 				toInt(void) const;
	int					ft_pow(void) const;
};

	std::ostream&		operator<<(std::ostream &out, const Fixed &fixed);

#endif
