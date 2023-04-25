#include <iostream>
#include<stdexcept>
#include "point.h"

using namespace miit::square;

int main()
{
	try
	{
		Point point_1 = Point(10, 10);
		Point point_2 = Point(10, 10);
		std::cout << (point_1 == point_2) << std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << error.what();
	}
	return 0;
}