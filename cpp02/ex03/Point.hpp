#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const float x, const float y);
		Point(const Fixed x, const Fixed y);
		Point(const Point& other);
		~Point();

		Fixed getX() const;
		Fixed getY() const;
	private:
		Point& operator=(const Point& other);

		const Fixed x;
		const Fixed y;
};

#endif
