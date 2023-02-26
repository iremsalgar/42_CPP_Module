#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
    private:
        int fp_value;
        static const int fract_bit;
    public:
	// Constructors
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& copy);

	// Deconstructors
		~Fixed();

	// Overloaded Operators
		Fixed &operator=(const Fixed &src);

	// Public Methods
		float toFloat(void)const;
		int toInt(void)const;
	// Getter
		int getRawBits(void)const;
	// Setter
		void setRawBits(int const raw);

};

std::ostream    &operator<<(std::ostream &a, Fixed const &fixed);

#endif