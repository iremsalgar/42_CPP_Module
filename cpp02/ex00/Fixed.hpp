#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
		int	_fp_value;
		static const int _fract_bits;

	public:
	// Constructors
		Fixed();
		Fixed(const Fixed &copy);
	// Deconstructors
		~Fixed();
		Fixed &operator=(const Fixed &src);
	// Getter
		int getRawBits(void)const;
	// Setter
		void setRawBits(int const raw);

};

#endif