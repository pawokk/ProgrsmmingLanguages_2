#include <iostream>
#include <string>
#include "Point.h"

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
    return this->y;
}

bool miit::square::Point::operator==(const Point& point) const
{
    return (point.x == this->x and point.y == this->y);
}

bool miit::square::Point::operator!=(const Point& point) const
{
    return not (point.x == this->x and point.y == this->y);
}


std::string miit::square::ToString(Point& point)
{
    return "X: " + std::to_string(point.get_x()) + " Y: " + std::to_string(point.get_y());
}

std::ostream& miit::square::operator<<(std::ostream& os, Point& point)
{
    return os << miit::square::ToString(point);
}