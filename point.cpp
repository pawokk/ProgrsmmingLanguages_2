#include <iostream>
#include <string>
#include "Point.h"
#include "Helplib.h"
#include <sstream>

miit::square::Point::Point(const double x, const double y)
    :x(x), y(y)
{
}

const double miit::square::Point::get_x() const
{
    return this->x;
}

const double miit::square::Point::get_y() const
{
    return this ->y;
}

std::ostream& miit::square::operator<<(std::ostream& os, Point& point)
{
    std::stringstream result;
    result << "X: " << point.x << " Y: " << point.y;
    return os << result.str();
}

bool miit::square::operator==(const Point& lhs, const Point& rhs)
{
    return (miit::helplib::is_double_equal(lhs.x, rhs.x) && miit::helplib::is_double_equal(lhs.y, rhs.y));
}

bool miit::square::operator!=(const Point& lhs, const Point& rhs)
{
    return !(miit::helplib::is_double_equal(lhs.x, rhs.x) && miit::helplib::is_double_equal(lhs.y, rhs.y));
}