#pragma once
#include <iostream>

namespace miit::square
{
	class Point;
	std::string ToString(Point& point);
	class Point
	{
	public:
		Point(const double x = 0.0, const double y = 0.0);
		const double get_x() const;
		const double get_y() const;

		friend std::ostream& operator<<(std::ostream& os, Point& point);
		bool operator == (const Point& point) const;
		bool operator != (const Point& point) const;
	private:
		double x;
		double y;
	};
}