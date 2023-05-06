#include <iostream>
#include <string>
#include "Point.h"
#include "Helplib.h"
#include <sstream>

miit::polygon::Point::Point(const double x, const double y)
    :x(x), y(y)
{
}

const double miit::polygon::Point::get_x() const
{
    return this->x;
}

const double miit::polygon::Point::get_y() const
{
    return this ->y;
}

std::ostream& miit::polygon::operator<<(std::ostream& os, Point& point)
{
    std::stringstream result;
    result << "X: " << point.x << " Y: " << point.y;
    return os << result.str();
}

bool miit::polygon::operator==(const Point& lha, const Point& rha)
{
    return (miit::helplib::is_double_equal(lha.x, rha.x) && miit::helplib::is_double_equal(lha.y, rha.y));
}

bool miit::polygon::operator!=(const Point& lha, const Point& rha)
{
    return !(lha == rha);
}