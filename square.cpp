#include <cmath>
#include "Square.h"



miit::polygon::Square::Square(const Point point_1, const Point point_2)
    :point_1(point_1), point_3(point_2)
{
    double p1_x = point_1.get_x();
    double p1_y = point_1.get_y();
    double p2_x = point_2.get_x();
    double p2_y = point_2.get_y();
    double dif_x = p2_x - p1_x;
    double dif_y = p2_y - p1_y;
    if (abs(dif_x - dif_y) > 0.00000001)
    {
        throw std::out_of_range("Not Square");
    }
    double side = abs(dif_x);
    this->side = side;
    this->point_2 = Point(p1_x + dif_x, p1_y);
    this->point_4 = Point(p1_x, p1_y + dif_y);
    this->center_point = Point(p1_x + dif_x / 2, p1_y + dif_y / 2);
}

miit::polygon::Square::Square(const Point center_point, const double side)
    :side(side), center_point(center_point)
{
    if (side < 0)
    {
        throw std::out_of_range("Negative Side");
    }
    double pc_x = center_point.get_x();
    double pc_y = center_point.get_y();
    this->point_1 = Point(pc_x - side / 2, pc_y + side / 2);
    this->point_2 = Point(pc_x + side / 2, pc_y + side / 2);
    this->point_3 = Point(pc_x + side / 2, pc_y - side / 2);
    this->point_4 = Point(pc_x - side / 2, pc_y - side / 2);
}



const miit::polygon::Point miit::polygon::Square::get_point_1() const
{
    return this->point_1;
}

const miit::polygon::Point miit::polygon::Square::get_point_2() const
{
    return this->point_2;
}

const miit::polygon::Point miit::polygon::Square::get_point_3() const
{
    return this->point_3;
}

const miit::polygon::Point miit::polygon::Square::get_point_4() const
{
    return this->point_4;
}

const miit::polygon::Point miit::polygon::Square::get_center_point() const
{
    return this->center_point;
}

double miit::polygon::Square::get_side() const
{
    return this->side;
}

double miit::polygon::Square::get_area() const
{
    return this->side * side;
}

double miit::polygon::Square::get_perimeter() const
{
    return this->side * 4;
}

