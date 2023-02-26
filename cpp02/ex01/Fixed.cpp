#include "Fixed.hpp"

const int Fixed::fract_bit = 8;

// Constructors
Fixed::Fixed(): fp_value(0)
{
	std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Fixed Int Constructor called" << std::endl;
	this->fp_value = input << this->fract_bit;
}

Fixed::Fixed(const float input)
{
	std::cout << "Fixed Float Constructor called" << std::endl;
	this->fp_value = roundf(input * (1 << this->fract_bit));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Fixed Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Fixed::~Fixed()
{
	std::cout << "Fixed Deconstructor called" << std::endl;
}

// Overloaded Operators
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this != &src)
		this->fp_value = src.getRawBits();

	return *this;
}

// Public Methods
float	Fixed::toFloat(void)const
{
	return ((float)this->fp_value / (float)(1 << this->fract_bit));
}

int	Fixed::toInt(void)const
{
	return (this->fp_value >> this->fract_bit);
}
// Getter
int	Fixed::getRawBits(void)const
{
	return (this->fp_value);
}

// Setter
void	Fixed::setRawBits(int const raw)
{
	this->fp_value = raw;
}


std::ostream	&operator<<(std::ostream &a, Fixed const &fixed)
{
	a << fixed.toFloat();
	return (a);
}