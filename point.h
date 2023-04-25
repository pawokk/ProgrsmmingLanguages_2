#pragma once
#include <iostream>

namespace miit::square
{
	class Point
	{
	public:
		Point(const double x = 0.0, const double y = 0.0);
		const double get_x() const;
		const double get_y() const;
		friend std::ostream& operator<<(std::ostream& os, Point& point);
		friend bool operator == (const Point& lhs, const Point& rhs);
		friend bool operator != (const Point& lhs, const Point& rhs);
	private:
		double x;
		double y;
	};
}
