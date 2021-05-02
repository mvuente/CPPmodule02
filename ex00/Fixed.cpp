#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
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

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpv);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpv = raw;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
