#include "Point.hpp"

#include <iostream>


//sağında mı solunda mı üstünde mi
// (y-y1) = (y2-y1)
//  ----     -----    //içler dışlar çarpımı
// (x-x1)   (x2-x1)
namespace 
{
	Fixed side (const Point p, const Point p1, const Point p2) 
	{
		return (p2.getY() - p1.getY()) * (p.getX() - p1.getX())
			+ ((p2.getX() * -1) + p1.getX()) * (p.getY() - p1.getY());
	}
}

bool bsp(const Point a, const Point b, const Point c, const Point point) 
{
	bool side1, side2, side3;

	side1 = side(point, a, b) > 0;
	side2 = side(point, b, c) > 0;
	side3 = side(point, c, a) > 0;

	//hepsi aynı tarafta mı? true false
	return (side1 && side2 && side3);
}
