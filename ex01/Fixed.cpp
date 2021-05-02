#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
	return ;
}

Fixed::Fixed(int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(val * this->ft_pow());
	return ;
}

Fixed::Fixed(float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(static_cast <float>(this->ft_pow()) * val);
	return ;
}

Fixed::Fixed(const Fixed &cpFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpFixed;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &cpFixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &cpFixed)
		this->_fpv = cpFixed.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

int		Fixed::getRawBits(void) const
{
	return (this->_fpv);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpv = raw;
	return ;
}

float 	Fixed::toFloat(void) const
{
	return (this->getRawBits() / static_cast <float>(this->ft_pow()));
}

int 	Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

int		Fixed::ft_pow(void) const
{
    int result = 1;
	int exp = this->_fb;
    while (exp)
    {
    	result *= 2;
        exp -= 1;
    }
    return result;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
