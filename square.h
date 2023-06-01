#pragma once
#include "Point.h"
namespace miit::polygon
{
	class Square
	{
	public:
		Square(const Point point_1, const Point point_2);
		Square(const Point center_point, const double side);
		const Point get_point_1() const;
		const Point get_point_2() const;
		const Point get_point_3() const;
		const Point get_point_4() const;
		const Point get_center_point() const;
		double get_side() const;
		double get_area() const;
		double get_perimeter() const;

	private:
		double side;
		Point center_point;
		Point point_1;
		Point point_2;
		Point point_3;
		Point point_4;
	};
}