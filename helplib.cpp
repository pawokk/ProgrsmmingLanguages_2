#include "Helplib.h"
#include <cmath>

bool miit::helplib::is_double_equal(double value_1, double value_2)
{
    return std::abs(value_1 - value_2) < 0.00001;
}